#include "PID.h"

float32_t SaturateValue(float32_t targetValue, float32_t minValue, float32_t maxValue)
{
    if (targetValue < minValue)
    {
        return minValue;
    }
    else if (targetValue > maxValue)
    {
        return maxValue;
    }
    else
    {
        return targetValue;
    }
}

void PID_Calculation(PID_Controller *pid, float32_t targetValue, float32_t measuredValue)
{
    float32_t tempResult = 0;
    float32_t err = targetValue - measuredValue;
    pid->integral += err * pid->coefficient.i;
    float32_t derivative = ((err - pid->previousErr) * pid->coefficient.d) / pid->deltaT;

    if (pid->isApplyAntiWindup == true)
    {
        pid->integral += (pid->coefficient.i * err + pid->coefficient.anti_windup * (pid->result - pid->beforeSaturatedResult)) * pid->deltaT;
    }
    else
    {
        pid->integral += (pid->coefficient.i * err) * pid->deltaT;
    }

    if (pid->isApplyFeedForward == true)
    {
        tempResult = err * pid->coefficient.p + pid->integral + derivative + targetValue * pid->coefficient.feed_forward;
    }
    else
    {
        tempResult = err * pid->coefficient.p + pid->integral + derivative;
    }

    pid->beforeSaturatedResult = tempResult;
    pid->result = SaturateValue(tempResult, pid->resultSaturation.min, pid->resultSaturation.max);
    pid->previousErr = err;
}
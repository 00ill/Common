#include "PID.h"

void PID_Calculation(PID_Controller *pid, float32 targetValue, float32 measuredValue)
{
    float32 tempResult = 0;
    float32 err = targetValue - measuredValue;
    pid->integral += err * pid->coefficient.i;
    float32 derivative = ((err - pid->previousErr) * pid->coefficient.d) / pid->deltaT;

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
    pid->result = ClampValue(tempResult, pid->resultSaturation.min, pid->resultSaturation.max);
    pid->previousErr = err;
}

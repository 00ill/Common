#ifndef PID_H
#define PID_H

#include "Define.h"

typedef struct
{
    float32_t p;
    float32_t i;
    float32_t d;
    float32_t anti_windup;
    float32_t feed_forward;
} Coefficient;

typedef struct 
{
    float32_t min;
    float32_t max;
} ResultSaturation;

typedef struct
{
    Coefficient coefficient;
    bool isApplyAntiWindup;
    bool isApplyFeedForward;
    ResultSaturation resultSaturation;
    float32_t integral;
    float32_t result;
    float32_t beforeSaturatedResult;
    float32_t deltaT;
    float32_t previousErr;
} PID_Controller;


float32_t SaturateValue(float32_t targetValue, float32_t minValue, float32_t maxValue);
void PID_Calculation(PID_Controller *pid, float32_t targetValue, float32_t measuredValue);

#endif
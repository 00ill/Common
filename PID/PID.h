#ifndef PID_H
#define PID_H

#include "Define.h"
#include "Utils.h"

typedef struct
{
    float32 p;
    float32 i;
    float32 d;
    float32 anti_windup;
    float32 feed_forward;
} Coefficient;

typedef struct 
{
    float32 min;
    float32 max;
} ResultSaturation;

typedef struct
{
    Coefficient coefficient;
    bool isApplyAntiWindup;
    bool isApplyFeedForward;
    ResultSaturation resultSaturation;
    float32 integral;
    float32 result;
    float32 beforeSaturatedResult;
    float32 deltaT;
    float32 previousErr;
} PID_Controller;

void PID_Calculation(PID_Controller *pid, float32 targetValue, float32 measuredValue);

#endif

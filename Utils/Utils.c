#include "Utils.h"

/// @brief Clamps the given value between a minimum and maximum value.
/// @param targetValue The value to be clamped.
/// @param minValue The minimum value that targetValue can be.
/// @param maxValue The maximum value that targetValue can be.
/// @return Returns minValue if targetValue is less than minValue, maxValue if targetValue is greater than maxValue, and targetValue otherwise.
float ClampValue(float targetValue, float minValue, float maxValue)
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

/// @brief Change the*current in proportion to speed, change immediately when speed is 1
/// @param type type of*current, choose 'i', 'f', 'l, 'L'
/// @param*current _current
/// @param target targer*current
/// @param speed change speed 0 ~ 1
void Lerp(char type, void *current, float target, float speed)
{
    switch (type)
    {
    case 'i':
    {
        int *val = (int)*current;
        float _current = (float)(*val);
        float delta = (target - _current) * speed;
        if (delta > 0 && delta < 1)
            delta = 1;
        if (delta < 0 && delta > -1)
            delta = -1;
        _current += delta;
        *val = (int)_current;
        break;
    }
    case 'f':
    {
        float *val = (float)*current;
        *val += (target - *val) * speed;
        break;
    }
    case 'l':
    {
        long *val = (long)*current;
        *val += (target - *val) * speed;
        break;
    }
    case 'L':
    {
        long long *val = (long long)*current;
        *val += (target - *val) * speed;
        break;
    }
    }
}

/// @brief Gradually modifies the current value to approach the target value.
/// @param current Pointer to the current value that will be modified.
/// @param target The target value to approach.
/// @param deltaValue The incremental change applied to the current value.
void StepModify(float *current, float target, float deltaValue)
{
    if (*current < target - deltaValue * 0.5)
    {
        *current += deltaValue;
    }
    else if (*current > target + deltaValue * 0.5)
    {
        *current -= deltaValue;
    }
    else
    {
        *current = target;
    }
}

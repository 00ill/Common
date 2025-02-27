#include "Utils.h"

/// @brief Change the value in proportion to speed, change immediately when speed is 1
/// @param type type of value, choose 'i', 'f', 'l, 'L'
/// @param value current value
/// @param target_value targer value
/// @param speed change speed 0 ~ 1
void lerp(char type, void *value, float target_value, float speed)
{
    switch (type)
    {
    case 'i':
    {
        int *val = (int *)value;
        float current_value = (float)(*val);
        float delta = (target_value - current_value) * speed;
        if (delta > 0 && delta < 1)
            delta = 1;
        if (delta < 0 && delta > -1)
            delta = -1;
        current_value += delta;
        *val = (int)current_value;
        break;
    }
    case 'f':
    {
        float *val = (float *)value;
        *val += (target_value - *val) * speed;
        break;
    }
    case 'l':
    {
        long *val = (long *)value;
        *val += (target_value - *val) * speed;
        break;
    }
    case 'L':
    {
        long long *val = (long long *)value;
        *val += (target_value - *val) * speed;
        break;
    }
    }
}
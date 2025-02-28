#ifndef UTILS_H
#define UTILS_H

float ClampValue(float targetValue, float minValue, float maxValue);
void Lerp(char type, void *value, float target_value, float speed);
void StepModify(float *current, float target, float deltaValue);
#endif

#ifndef CALCULADORA_H
#define CALCULADORA_H
#include <stdio.h>

float add(float num1, float num2) {
    float result = num1 + num2;
    return result;
}

float sub(float num1, float num2) {
    float result = num1 - num2;
    return result;
}

float div(float num1, float num2) {
    float result = num1 / num2;
    return result;
}

float mul(float num1, float num2) {
    float result = num1 * num2;
    return result;
}

#endif
#include"operations.h"

complex_t multiplication(complex_t *a, complex_t *b){
    complex_t result;

    result.real = a->real*b->real - a->imaginary*b->imaginary;
    result.imaginary = a->imaginary*b->real + a->real*b->imaginary;

    return result;
}
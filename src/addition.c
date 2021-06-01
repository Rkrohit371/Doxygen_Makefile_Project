#include"operations.h"

complex_t addition(complex_t *a, complex_t *b){
    complex_t result;

    result.real = a->real + b->real;
    result.imaginary = a->imaginary + b->imaginary;

    return result;
}
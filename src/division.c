#include"operations.h"

complex_t division(complex_t *a, complex_t *b){
    complex_t result;
    
    result.real = ((a->real*b->real) + (a->imaginary*b->imaginary))/((b->real*b->real) + (b->imaginary*b->imaginary));
    result.imaginary = ((a->imaginary*b->real) - (a->real*b->imaginary))/((b->real*b->real) + (b->imaginary*b->imaginary));
    
    return result;
}
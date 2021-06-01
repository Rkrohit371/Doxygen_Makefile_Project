#include<stdio.h>
#include"operations.h"

void write(complex_t *result, char *key){
    printf("\nPrinting the %s result.\n", key);
    printf("Real part: %0.2f\n", result->real);
    printf("Imaginary part: %0.2f\n", result->imaginary);
}
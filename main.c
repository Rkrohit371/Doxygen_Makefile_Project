#include<stdio.h>
#include"operations.h"

// typedef struct complex_t {
//     float real;
//     float imaginary;
// } complex_t;

/*
complex_t addition(complex_t *a, complex_t *b){
    complex_t result;

    result.real = a->real + b->real;
    result.imaginary = a->imaginary + b->imaginary;

    return result;
}

complex_t subtraction(complex_t *a, complex_t *b){
    complex_t result;

    result.real = a->real - b->real;
    result.imaginary = a->imaginary - b->imaginary;

    return result;
}

complex_t multiplication(complex_t *a, complex_t *b){
    complex_t result;

    result.real = a->real*b->real - a->imaginary*b->imaginary;
    result.imaginary = a->imaginary*b->real + a->real*b->imaginary;

    return result;
}

complex_t division(complex_t *a, complex_t *b){
    complex_t result;
    
    result.real = ((a->real*b->real) + (a->imaginary*b->imaginary))/((b->real*b->real) + (b->imaginary*b->imaginary));
    result.imaginary = ((a->imaginary*b->real) - (a->real*b->imaginary))/((b->real*b->real) + (b->imaginary*b->imaginary));
    
    return result;
}

void read(complex_t *a, complex_t *b){
    a->real = 7;
    a->imaginary = -6;

    b->real = 2;
    b->imaginary = -3;
}

void write(complex_t *result, char *key){
    printf("\nPrinting the %s result.\n", key);
    printf("Real part: %0.2f\n", result->real);
    printf("Imaginary part: %0.2f\n", result->imaginary);
}
*/

int main(){
    complex_t a,b,sub_result,mul_result,div_result,add_result;
    
    read(&a, &b); // Reading the two complex numbers.

    printf("First number\n");
    printf("Real part: %0.2f\n", a.real);
    printf("Imaginary part: %0.2f\n\n", a.imaginary);
    printf("Second number\n");
    printf("Real part: %0.2f\n", b.real);
    printf("Imaginary part: %0.2f\n", b.imaginary);

    add_result = addition(&a, &b); // Computing the addition of two complex numbers.
    write(&add_result, "addition"); // Printing the addition result
    printf("\n");
    sub_result = subtraction(&a, &b); // Computing the subtraction of two complex numbers.
    write(&sub_result, "subtraction"); // Printing the subtraction result
    printf("\n");
    mul_result = multiplication(&a, &b); // Computing the multiplication of two complex numbers.
    write(&mul_result, "multiplication"); // Printing the multiplication result
    printf("\n");
    div_result = division(&a, &b); // Computing the division of two complex numbers.
    write(&div_result, "division"); // Printing the division result
    printf("\n");

    return 0;
}
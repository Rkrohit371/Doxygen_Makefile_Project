// Functions prototypes

/**
 * Definition of the structure.
 * It takes two float number, real and imaginary part of the complex number. 
*/
typedef struct complex_t {
    float real;
    float imaginary;
} complex_t;

/**
 * @brief Function addition compute the addition of two complex number.
 * This is the complete description of addition function.
 * @param addition function takes two parameters addresses of two numbers.
 * @return It returns the final result after calculation.
*/
complex_t addition(complex_t *a, complex_t *b);

/**
 * @brief Function subtraction compute the subtraction of two complex number.
 * This is the complete description of subtraction function.
 * @param subtraction function takes two parameters addresses of two numbers.
 * @return It returns the final result after calculation.
*/
complex_t subtraction(complex_t *a, complex_t *b);

/**
 * @brief Function multiplication compute the multiplication of two complex number.
 * This is the complete description of multiplication function.
 * @param multiplication function takes two parameters addresses of two numbers.
 * @return It returns the final result after calculation.
*/
complex_t multiplication(complex_t *a, complex_t *b);

/**
 * @brief Function division compute the division of two complex number.
 * This is the complete description of division function.
 * @param division function takes two parameters addresses of two numbers.
 * @return It returns the final result after calculation.
*/
complex_t division(complex_t *a, complex_t *b);

/**
 * @brief Function read reads the two complex numbers.
 * This is the complete description of read function.
 * @param read function takes two parameters addresses of two numbers.
 * @return It returns the final result after calculation.
*/
void read(complex_t *a, complex_t *b);

/**
 * @brief Function write prints the final result after the complete calculation has been done.
 * This is the complete description of write function.
 * @param write function takes two parameters, computed final result and a keyword(addition, subtraction, multiplication, division).
 * @return It prints the final complex number i.e final result.
*/
void write(complex_t *result, char *key);
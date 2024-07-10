
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>


void divide(uint32_t dividend, uint32_t divisor, uint32_t *quotient, uint32_t *remainder) {
    if (divisor == 0) {
        printf("error  by zero\n");
        *quotient = 0;
        *remainder = 0;
        return;
    }
    *quotient = dividend / divisor;
    *remainder = dividend % divisor;}
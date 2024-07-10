#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>




int main() {


    uint32_t dividend, divisor;
    uint32_t quotient, remainder;

    printf("Enter dividend: ");
    scanf("%u", &dividend);
    printf("Enter divisor: ");
    scanf("%u", &divisor);

    divide(dividend, divisor, &quotient, &remainder);

    printf("Quotient: %u, Remainder: %u\n", quotient, remainder);

    return 0;
}

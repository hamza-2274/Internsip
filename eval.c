#include <stdio.h>
#include <stdint.h>
int main() {
    int dividend, divisor;
    printf("rnter dividend: ");
    scanf("%d", &dividend);
    printf("enter divisor: ");
    scanf("%d", &divisor);

    int quotient, remainder;
    divide(dividend, divisor, &quotient, &remainder);

    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}

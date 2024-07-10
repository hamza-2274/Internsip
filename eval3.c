#include <stdio.h>
#include <stdint.h>

void divide(int dividend, int divisor, int *quotient, int *remainder) {
    int a = 0;
    int q = dividend;
    int m = divisor;
    int n = sizeof(int) * 8;

    for (int i = 0; i < n; i++) {
        a = (a << 1) | ((q & (1 << (n - 1))) >> (n - 1));
        q = q << 1;
        a = a - m;

        if (a < 0) {
            q = q & ~(1);
            a = a + m;
        } else {
            q = q | 1;
        }
    }

    *quotient = q;
    *remainder = a;
}



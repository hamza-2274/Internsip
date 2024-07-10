
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>




void sieve(unsigned int n) {
     bool *prime = malloc((n + 1) * sizeof(bool));
    for (unsigned int i = 0; i <= n; i++) {
        prime[i] = true;
    }

    for (unsigned int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (unsigned int i = p * p; i <= n; i += p) {
                prime[i] = false;
            }
        }
    }

    printf("prime no up to %u are: ", n);
    for (unsigned int p = 2; p <= n; p++) {
        if (prime[p]) {
            printf("%u ", p);
        }
    }
    printf("\n");

    free(prime);
}
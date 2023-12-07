#include <stdio.h>

int checkPrime(int n) {
    int i;
    
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            {
                return 0;
            }
    }
    return 1;
}

int main() {
    FILE *fptr_even, *fptr_odd, *fptr_prime;

    fptr_even = fopen("even.txt", "w");
    fptr_odd = fopen("odd.txt", "w");
    fptr_prime = fopen("prime.txt", "w");

    if (fptr_even == NULL || fptr_odd == NULL || fptr_prime == NULL) {
        printf("Error opening file!");
        return -1;
    }

    int i;
    for (i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            fprintf(fptr_even, "%d\n", i);
        } else {
            fprintf(fptr_odd, "%d\n", i);
            if (checkPrime(i)) {
                fprintf(fptr_prime, "%d\n", i);
            }
        }
    }

    fclose(fptr_even);
    fclose(fptr_odd);
    fclose(fptr_prime);

    return 0;
}
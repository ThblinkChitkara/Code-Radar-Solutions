#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void printPrimesInRange(int a, int b) {
    bool found = false;
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            if (found) printf(" ");
            printf("%d", i);
            found = true;
        }
    }
    if (!found) {
        printf("No prime numbers");
    }
    printf("\n");
}
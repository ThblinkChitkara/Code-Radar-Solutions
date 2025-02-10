#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    for (int i = 1; i <= a; i++) {
        // Print leading spaces
        for (int j = 0; j < a - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 0; k < i; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
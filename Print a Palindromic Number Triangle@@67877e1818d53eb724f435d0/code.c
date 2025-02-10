#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        // Print leading spaces for alignment
        for (int space = 0; space < N - i; space++) {
            printf(" ");
        }
        
        // Print increasing sequence
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Print decreasing sequence
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");  // Move to the next line
    }

    return 0;
}
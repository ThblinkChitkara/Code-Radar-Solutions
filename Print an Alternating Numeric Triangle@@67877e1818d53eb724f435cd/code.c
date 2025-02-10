#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    for (int i = 0; i < N ; i++) {
        int start = !(i % 2);  // Determines the starting value for each row
        for (int j = 0; j <= i; j++) {
            printf("%d ", start);
            start = 1 - start;  // Toggle between 1 and 0
        }
        printf("\n");
    }
    
    return 0;
}
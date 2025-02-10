#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        // Espaces pour centrer la pyramide
        for (int j = 0; j < N - i; j++) {
            printf(" ");
        }
        
        // Affichage des nombres
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        
        printf("\n");
    }
    
    return 0;
}
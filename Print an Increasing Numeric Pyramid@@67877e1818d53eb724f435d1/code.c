#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Lire le nombre de lignes

    for (int i = 1; i <= N; i++) { // Boucle pour chaque ligne
        for (int j = 1; j <= i; j++) { // Boucle pour afficher les nombres
            printf("%d ", j);
        }
        printf("\n"); // Aller à la ligne suivante
    }

    return 0;
}
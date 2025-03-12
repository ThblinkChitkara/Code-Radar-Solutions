#include <stdio.h>

int findKthMissing(int arr[], int n, int k) {
    int missingCount = 0, current = 1, index = 0;

    while (missingCount < k) {
        if (index < n && arr[index] == current) {
            index++;  // Passer au nombre suivant dans le tableau
        } else {
            missingCount++;  // Un nombre manquant trouvé
            if (missingCount == k) {
                return current;
            }
        }
        current++;  // Vérifier le prochain nombre
    }

    return -1; // Ce retour ne devrait jamais être atteint
}
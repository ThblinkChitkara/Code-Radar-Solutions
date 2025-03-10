#include <stdio.h>

int findUnsortedSubarray(int arr[], int n) {
    int start = -1, end = -1;
    
    // Trouver le premier élément qui n'est pas trié
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            start = i;
            break;
        }
    }
    
    // Si le tableau est déjà trié
    if (start == -1) return 0;

    // Trouver le dernier élément qui n'est pas trié
    for (int i = n - 1; i > 0; i--) {
        if (arr[i] < arr[i - 1]) {
            end = i;
            break;
        }
    }

    // Trouver min et max dans cette sous-séquence
    int minVal = arr[start], maxVal = arr[start];
    for (int i = start; i <= end; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }

    // Étendre start vers la gauche si nécessaire
    for (int i = 0; i < start; i++) {
        if (arr[i] > minVal) {
            start = i;
            break;
        }
    }

    // Étendre end vers la droite si nécessaire
    for (int i = n - 1; i > end; i--) {
        if (arr[i] < maxVal) {
            end = i;
            break;
        }
    }

    return end - start + 1;
}


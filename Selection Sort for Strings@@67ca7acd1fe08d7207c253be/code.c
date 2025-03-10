#include <string.h>

// Fonction de tri par sélection pour un tableau de chaînes de caractères
void selectionSort(char arr[][100], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[j], arr[minIndex]) < 0) {
                minIndex = j;
            }
        }
        // Échanger les chaînes de caractères
        char temp[100];
        strcpy(temp, arr[minIndex]);
        strcpy(arr[minIndex], arr[i]);
        strcpy(arr[i], temp);
    }
}

// Fonction pour afficher le tableau trié
void printArray(char arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}
#include <stdio.h>
#include <string.h>

void compressString(char *str, char *compressed) {
    int len = strlen(str);
    int index = 0; // Index pour construire la chaîne compressée

    for (int i = 0; i < len; i++) {
        char currentChar = str[i];
        int count = 1;

        // Compter les occurrences du caractère actuel
        while (i + 1 < len && str[i + 1] == currentChar) {
            count++;
            i++;
        }

        // Ajouter le caractère et son nombre d'occurrences
        compressed[index++] = currentChar;
        index += sprintf(&compressed[index], "%d", count);
    }

    compressed[index] = '\0'; // Terminer la chaîne

    // Si la chaîne compressée n'est pas plus courte, retourner l'originale
    if (strlen(compressed) >= len) {
        strcpy(compressed, str);
    }
}
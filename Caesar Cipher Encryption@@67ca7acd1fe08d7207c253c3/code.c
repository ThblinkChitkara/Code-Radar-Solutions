#include <ctype.h>
#include <stdio.h>
#include <str.h>
// Fonction pour chiffrer le message avec le chiffrement de César
void caesarCipher(char message[], int shift, char encrypted[]) {
    for (int i = 0; message[i] != '\0'; i++) {
        char c = message[i];

        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            encrypted[i] = (c - base + shift) % 26 + base;
        } else {
            encrypted[i] = c; // Ne change pas les caractères non alphabétiques
        }
    }
    encrypted[strlen(message)] = '\0'; // Ajouter le caractère de fin de chaîne
}
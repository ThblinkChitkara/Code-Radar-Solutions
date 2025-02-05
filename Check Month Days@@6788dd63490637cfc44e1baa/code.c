#include <stdio.h>

#include <stdio.h>
#include <string.h>

int main() {
    char a[20];  // Tableau pour stocker l'entrée utilisateur
    scanf("%19s", a);  // Lecture sécurisée d'une chaîne (évite le dépassement de mémoire)

    if (strcmp(a, "February") == 0) {
        printf("28");
    } else if (strcmp(a, "January") == 0 || strcmp(a, "March") == 0 || strcmp(a, "May") == 0 || 
               strcmp(a, "July") == 0 || strcmp(a, "August") == 0 || strcmp(a, "October") == 0 || 
               strcmp(a, "December") == 0) {
        printf("31");
    } else {
        printf("30");
    }

    return 0;
}
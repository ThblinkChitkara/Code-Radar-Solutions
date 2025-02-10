#include <stdio.h>

int main() {
    int a;
    scnaf("%i", &a);
    for (int i = 0; i < a; i++){
        if (i == 0 || i == a-1) for (int j = 0; j < a; j++) printf("*");
        else {
            printf("*");
            for (int y = 1; y < a-1; y++) printf(" ");
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
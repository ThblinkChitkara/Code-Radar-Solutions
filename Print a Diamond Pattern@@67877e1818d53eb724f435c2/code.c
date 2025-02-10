#include <stdio.h>

int main() {
    int a;
    scanf("%i", &a);
    for (int i = 1; i <= a; i++){
        for (int j = 0; j < a - i; j++){
            printf(" ");
        }
        for (int y = 0; y < 2*i -1; y++) printf("*");
        printf("\n");
    }
    printf("\n");    
    for (int i = 1; i <= a; i++){
        for (int j = 0; j < a - i; j++){
            printf(" ");
        }
        for (int y = 0; y < 2*i -1; y++) printf("*");
        printf("\n");
    }
    return 0;
}
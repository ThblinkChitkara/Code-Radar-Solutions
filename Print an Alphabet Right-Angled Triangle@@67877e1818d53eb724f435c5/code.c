#include <stdio.h>

int main() {
    int a;
    scanf("%i", &a);
    for (int i = 0; i < a; i++){
        for (int y = -1; y < i; y++){
            printf("%c ", y+65 + 1);
        }
        printf("\n");
    }
    return 0; 
}
#include <stdio.h>

int main() {
    int a;
    scanf("%i", &a);
    for (int i = 0; i < a; i++){
        for (int y = -1; y < i; y++){
            printf("%i ", y+2);
        }
        printf("\n");
    }
    return 0; 
}
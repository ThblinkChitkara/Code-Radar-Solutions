#include <stdio.h>

int main() {
    int a;
    scanf("%i", &a);
    for (int i = 1; i < a; i++){
        for (int y = 0; y < i; y++){
            printf("* ");
        }
        printf("\n");
    }
    return 0; 
}

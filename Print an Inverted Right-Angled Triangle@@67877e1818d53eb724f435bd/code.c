#include <stdio.h

int main() {
    int a;
    scanf("%i", &a);
    for (int i = a; i > 0; i--){
        for (int y = 0; y < i; i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
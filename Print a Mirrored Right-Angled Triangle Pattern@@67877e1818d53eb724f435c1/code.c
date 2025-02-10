#include <stdio.h>

int main() {
    int a;
    scanf("%i", &a);
    for (int i = 0; i < a; i++){
        for (int y = a; y > 0; y--){
            printf((y < i) ? " " : "*");
        }
        printf("\n");
    }
    return 0;
}
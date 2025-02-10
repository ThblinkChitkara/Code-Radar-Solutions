#include <stdio.h>

int main() {
    int a;
    int temp = 1;
    scanf("%i", &a);
    for (int i = 0; i < a; i++){
        for (int y = -1; y < i; y++){
            printf("%i ", temp);
            temp++;
        }
        printf("\n");
    }
    return 0; 
}
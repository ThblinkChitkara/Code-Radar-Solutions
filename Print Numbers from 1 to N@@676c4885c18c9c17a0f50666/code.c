#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    for (int i = 0; i >= 0 && i <= a; i++){
        printf("%i ", &i);
    }
}
#include <stdio.h>

int main(){
    int a;
    scanf("%i", &a);
    for(int i = 1; i <= 10; i++){
        printf("%i x %i = %i\n", a, i, a*i);
    }
}
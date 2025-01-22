#include <stdio.h>

int main(){
    int a, b;
    scanf("%i", &a);
    scanf("%i", &b);
    a ^= 1 << b;
    printf("%i", a);
    return 0;


}
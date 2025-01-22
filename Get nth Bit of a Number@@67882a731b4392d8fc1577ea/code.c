#include <stdio.h>

int main() {
    int a, b;
    scanf("%i", &a);
    scanf("%i", &b);
    
    a >>= b;
    a &= 1;

    printf("%i", a);
    return 0;
}
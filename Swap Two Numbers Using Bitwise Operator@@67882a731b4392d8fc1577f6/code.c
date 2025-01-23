#include <stdio.h>

int main() {
    
    int a, b;
    scanf("%i", &a);
    scanf("%i", &b);

    a ^= b;
    b ^= a;
    a ^= b;

    printf("%i %i",a, b);
    return 0;
}
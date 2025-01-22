#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%i", &a);
    scanf("%i", &b);
    c = 1;
    c <<= b;
    a ^= b;
    
    printf("%i", a);
    return 0;
}
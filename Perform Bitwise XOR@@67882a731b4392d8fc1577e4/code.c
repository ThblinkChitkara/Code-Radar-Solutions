#include <stdio.h>

int main() {
    int a, b;
    scanf("%i", &a);
    scanf("%i", &b);
    a ^= b;
    printf("%i", a);
    return 0;
}
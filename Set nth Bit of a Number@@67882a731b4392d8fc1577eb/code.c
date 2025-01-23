#include <stdio.h>


int main() {
    int a, b;
    scanf("%i", &a);
    scanf("%i", &b);
    printf("%i", a | (1 << b));
    return 0;
}
#include <stdio.h>

int main() {
    int a, b;
    scanf("%i %i", &a, &b);

    printf("%s", ( a % b ) ? "No" : "Yes");
    return 0;
}
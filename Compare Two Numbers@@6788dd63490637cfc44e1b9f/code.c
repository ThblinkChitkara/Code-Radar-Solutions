#include <stdio.h>

int main() {
    int a, b;
    scanf("%i %i", &a, &b);

    printf("%s", (a == b) ? "Equal" : (a > b) ? "First" : "Second");
    return 0;
}
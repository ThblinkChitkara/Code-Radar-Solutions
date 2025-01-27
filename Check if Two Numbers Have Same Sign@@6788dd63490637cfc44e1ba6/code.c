#include <stdio.h>

int main() {
    int a, b;
    scanf("%i %i", &a, &b);
    printf("%s", !(a < 0 ^ a < 0) ? "Same Sign" : "Different Sign");
    return 0;
}
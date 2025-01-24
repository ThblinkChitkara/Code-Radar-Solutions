#include <stdio.h>

int main() {
    int a, b;
    scanf("%i %i", &a, &b);
    printf("%s", (a < b) ? "Yes" : "No");
    return 0;
}
#include <stdio.h>

int main() {
    int a;
    scanf("%i", &a);
    printf("%s", (a <= 0) ? "Freezing" : "Above Freezing");
    return 0;
}
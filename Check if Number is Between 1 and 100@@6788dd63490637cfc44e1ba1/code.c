#include <stdio.h>

int main() {
    int a;
    scanf("%i", &a);
    printf("%s", (a >= 1 && a <= 100) ? "In Range" : "Out of Range");
    return 0;
}
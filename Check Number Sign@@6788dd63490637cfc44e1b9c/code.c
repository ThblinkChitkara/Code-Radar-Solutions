#include <stdio.h>

int main() {
    int a;
    scanf("%i", &a);

    printf("%s", (a > 0) ? "Positive" : (a < 0) ? "Negative" : "Zero");
    return 0;
}
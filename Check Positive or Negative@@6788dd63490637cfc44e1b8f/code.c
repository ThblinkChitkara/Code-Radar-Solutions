#include <stdio.h>


int main() {
    int a;
    scanf("%i", &a);
    if (a == 0) printf("Zero");
    else printf("%s", (a > 0) ? "Positive" : "Negative");
    printf("%s", welcome());
    return 0;
}
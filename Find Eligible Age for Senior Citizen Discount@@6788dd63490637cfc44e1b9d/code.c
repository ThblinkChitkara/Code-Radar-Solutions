#include <stdio.h>

int main() {
    int a;
    scanf("%i", &a);
    printf("%s", (a >= 60) ? "Eligible" : "Not Eligible");
    return 0;
}
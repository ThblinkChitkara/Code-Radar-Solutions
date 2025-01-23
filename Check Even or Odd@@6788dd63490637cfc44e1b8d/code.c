#include <stdio.h>



int main() {
    int a;
    scanf("%i", &a);
    printf("%s", (a%2 == 0) ? "Even" : "Odd");
    return 0;
}
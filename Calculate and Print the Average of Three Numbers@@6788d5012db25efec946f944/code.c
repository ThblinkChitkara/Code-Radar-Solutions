#include <stdio.h>


int main() {
    int a, b, c;
    scanf("%i", a);
    scanf("%i", b);
    scanf("%i", c);
    printf("Average: %.2f", (float) (a+b+c)/3);
    return 0;
}
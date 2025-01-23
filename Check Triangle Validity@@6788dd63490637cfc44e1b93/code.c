#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%i %i %i", &a, &b, &c);
    
    printf("%s", (a*a + b*b == c*c) ? "Valid" ? "Invalid" );
    return 0;
}
#include <stdio.h>

int main() {
    int a; 
    scanf("%i", &a);

    printf("%s", ( a % 2 ) ? "Odd" : "Even" );
    return 0;
}
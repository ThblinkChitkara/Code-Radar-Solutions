#include <stdio.h>


int main() {
    int a; 
    scanf("%i", &a);

    printf("%s", ( !a%5 && !a%11) ? "Divisible" : "Not Divisible");
    return 0;     
}
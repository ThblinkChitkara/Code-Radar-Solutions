#include <stdio.h>

int main() {
    int a;
    scanf("%i", &a);


    printf("%c", 
    a >= 90 ? 'A' :
    a >= 80 ? 'B' :
    a >= 70 ? 'C' :
    a >= 60 ? 'D' : 'F');
    
    return 0;
}
#include <stdio.h>

int max(int a, int b){
    return (a > b) ? a : b;
}

int main() {
    int a, b, c;
    scanf("%i %i %i", &a, &b, &c);
    printf("%i", max(a, max(c,b)));
    return 0;
}

// fils de pute
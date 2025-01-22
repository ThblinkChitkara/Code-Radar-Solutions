#include <stdio.h>


int main() {
    int a, rep;
    rep = 0;
    scanf("%i", &a);
    while (!(a & 1)){
        a >>= 1;
        rep++;
    }
    printf("%i", rep);
}
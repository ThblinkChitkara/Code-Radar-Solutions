#include <stdio.h>

int main() {
    int a, b;
    scanf("%i", &a);
    b = 1;
    b <<= 31;
    char* rep = (a == b) ? "Set" : "Not Set";
    printf(rep);
    return 0;
}
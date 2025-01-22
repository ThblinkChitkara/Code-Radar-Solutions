#include <stdio.h>

int main() {
    int a, b;
    scanf("%i", &a);
    scanf("%i", &b);
    char* rep = (!(a <= 0 && b <= 0)) ? "True" : "False";
    printf(rep);
    return 0;
}
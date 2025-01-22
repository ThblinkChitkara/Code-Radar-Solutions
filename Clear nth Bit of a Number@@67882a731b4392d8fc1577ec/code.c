#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%i", &a);
    scanf("%i", &b);
    c = 1;
    c <<= b;
    a |= b;
    char* rep = (a) ? "Set" : "Not Set";
    printf(rep);
    return 0;
}
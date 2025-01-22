#include <stdio.h>

int main() {
    int a, b;
    scanf("%i", &a);
    b = 1;
    a &= b;
    char* rep = (a == 1) ? "Set" : "Not Set";
    printf(rep);
    return 0;
}
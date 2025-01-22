#include <stdio.h>

int main() {
    int a;
    scanf("%i", &a);
    char* rep = (!(a > 0)) ? "True" : "False";
    printf(rep);
    return 0;
}
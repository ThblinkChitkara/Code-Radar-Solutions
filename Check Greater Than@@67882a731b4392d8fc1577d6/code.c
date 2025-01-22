#include <stdio.h>


int main() {
    int a, b;
    scanf("%i", &a);
    scanf("%i", &b);
    char* rep = (a > b) ? "True" : "False";
    printf(rep);
    return 0;
}
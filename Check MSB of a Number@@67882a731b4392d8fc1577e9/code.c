#include <stdio.h>

int main() {
    int a, b;
    scanf("%i", &a);
 
    char* rep = (a == 2147483648) ? "Set" : "Not Set";
    printf(rep);
    return 0;
}
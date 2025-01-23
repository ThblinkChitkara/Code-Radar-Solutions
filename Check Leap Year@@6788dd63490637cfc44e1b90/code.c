#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%i", &a);

    printf("%s", (a%4) ? "Not a Leap Year" : "Leap year") ;
    return 0;
}
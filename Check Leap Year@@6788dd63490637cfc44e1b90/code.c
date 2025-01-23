#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%i", &a);

    printf("%s", 

    !(a%4) && ( !(a%100) || (a%400))

    ? "Leap Year": "Not a Leap Year");

    return 0;
}
#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%i", &a);

    printf("%s", 

    (!(a%100) && !(a%400)) || !(a%4)

    ? "Leap Year": "Not a Leap Year");

    return 0;
}
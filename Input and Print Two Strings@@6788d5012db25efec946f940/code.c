#include <stdio.h>

int main() {
    char* a = malloc(sizeof(char) * 30);
    char* b = malloc(sizeof(char) * 30);
    scanf("%s", a);
    scanf("%s", b);
    printf("You entered: %s and %s", a, b);
    return 0;
}
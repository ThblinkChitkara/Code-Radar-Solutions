#include <stdio.h>

char* welcome() {
    char* rep;
    scanf("%c",rep);
    return rep;
}

int main() {
    printf("%c", welcome());
    return 0;
}
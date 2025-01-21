#include <stdio.h>

char* welcome() {
    char* rep;
    scanf("%c",rep);
    return rep;
}

int main() {
    printf("%s", welcome());
    return 0;
}
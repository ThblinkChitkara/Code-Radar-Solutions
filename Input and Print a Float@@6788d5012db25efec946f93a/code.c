#include <stdio.h>

char* welcome() {
    char* rep;
    scanf(%s,&rep);
    return rep;
}

int main() {
    printf("%s", welcome());
    return 0;
}
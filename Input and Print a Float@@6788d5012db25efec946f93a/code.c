#include <stdio.h>

char* welcome() {
    char* rep malloc(sizeof(char)*30);
    scanf("%c",rep);
    return rep;
}

int main() {
    printf("%s", welcome());
    return 0;
}
#include <stdio.h>



int main() {
    char* rep = malloc(sizeof(char)*30);
    scanf("%s", rep);
    printf("You entered: %s", rep);
    return 0;
}
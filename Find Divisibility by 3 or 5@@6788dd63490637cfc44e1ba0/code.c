#include <stdio.h>

int main() {
    int a;
    scanf("&i", &a);
    char* rep = malloc(sizeof(char)*30);
    if (a%3 == 0) {
        if (a%5 == 0) rep = "Divisible by Both";
        else rep = "Divisible by 3";
    }
    else rep = (a%5 == 0) ? "Divisible by 5" : "Not Divisible";
    printf("%s", rep);
    free(rep);
    return 0;
}
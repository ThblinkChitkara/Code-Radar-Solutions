#include <stdio.h>
#include <string.h>

int main() {
    char* a;
    scanf("%s", a);
    printf(strcmp(a, "A") ? "Excellent" : strcmp(a, "B") ? "Good" : strcmp(a, "C") ? "Average" :
    strcmp(a, "D") ? "Below Average" : strcmp(a, "F") ? "Fail" : "Invalid grade");
    return 0;
}
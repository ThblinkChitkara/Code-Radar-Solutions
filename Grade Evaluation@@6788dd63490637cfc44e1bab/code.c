#include <stdio.h>
include <string.h>

int main() {
    char a;
    scanf("%c", &a);
    printf((a == 'A') ? "Excellent" : (a == 'B') 
    ? "Good" : (a == 'C') ? "Average" : (a == 'D') 
    ? "Below Average" : (a == 'F') ? "Fail" : "Invalid grade");
    return 0;
}
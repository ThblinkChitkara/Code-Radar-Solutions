#include <stdio.h>


int main() {
    char a;
    scanf("%c", &a);

    printf("%s", 
    (a >= "a" && a <= "z") ? "Lowercase" : 
        (a >= "A" && a <= "Z") ? "Uppercase" :
            "Not an alphabet" );
    return 0;
}
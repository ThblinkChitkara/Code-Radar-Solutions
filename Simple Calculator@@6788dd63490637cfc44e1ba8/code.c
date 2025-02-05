#include <stdio.h>



int main(){

    int a, b;
    char c;
    scanf("%i %i %c", &a, &b, &c);
    switch(c){
        case '+':
            printf("%i", a+b);
            break;
        case '-':
            printf("%i", a-b);
            break;
        case '/':
            if (!b) {
                printf("error");
                return 1;
            }
            printf("%i", a/b);
            break;
        case '*':
            printf("%i", a*b);
            break;
        case '%':
            printf("%i", a%b);
            break;
        default :
            return 1;
    }
    return 0;
}

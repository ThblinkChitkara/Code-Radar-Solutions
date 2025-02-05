#include <stdio.h>



int main(){
    printf("Write your expression :");
    int a, b;
    char c;
    scanf("%i %c %i", &a, &c, &b);
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
                return;
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

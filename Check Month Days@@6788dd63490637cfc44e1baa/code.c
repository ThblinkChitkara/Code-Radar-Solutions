#include <stdio.h>

int main() {
    char* a;
    scanf("%s", &a);
    switch(a){
        case "February":
            printf("28");
            break;
        case "January": 
        case "Mars":
        case "June":
        case "May":
        case "July":
        case "August":
        case "October":
        case "December":
            printf("31");
            break;
        default : 
            printf("30");
            break;
    }
    return 0;
}
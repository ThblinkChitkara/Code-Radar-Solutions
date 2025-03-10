#include <stdio.h>

int main(){
    int a;
    scanf("%i", &a);
    int rep = 0;
    for (int i = 0; i <= a; i++){
        rep += i;
    }
    printf("%i", rep);
}
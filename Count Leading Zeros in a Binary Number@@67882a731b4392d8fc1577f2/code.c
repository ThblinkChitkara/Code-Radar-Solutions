#include <stdio.h>



int main() {
    int a, rep, temp;
    temp = 1 << 31;
    rep = 0;
    a = scanf("%i", &a);
    while (!(a & temp)){
        rep++;
        a <<=1;
    }
}
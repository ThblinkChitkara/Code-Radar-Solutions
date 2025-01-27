#include <stdio.h>

int main() {
    int a;
    scanf("%i", &a);
    int isprime = a > 1;
    for (int i = 2; i < a && isprime; i++){
        if (a%i == 0) isprime = 0;
        i++;
    }
    printf("%s", (isprime) ? "Prime" : "Not Prime");
    return 0;
}
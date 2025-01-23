#include <stdio.h>


void decimalToBinary(int n) {
    if (n == 0) {
        printf("0");
        return;
    }
    
    int binary[32]; // Array to store binary digits
    int i = 0;

    while (n > 0) {
        binary[i] = n % 2; // Store the remainder
        n = n / 2;
        i++;
    }

    // Print the binary digits in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    int num;
    
    scanf("%d", &num);

   
    decimalToBinary(num);

    return 0;
}
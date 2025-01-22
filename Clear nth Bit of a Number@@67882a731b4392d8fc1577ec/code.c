#include <stdio.h>


unsigned int reverseBits(unsigned int num) {
    // Étape 1 : Échange des moitiés des bits
    num = ((num & 0xFFFF0000) >> 16) | ((num & 0x0000FFFF) << 16);
    // Étape 2 : Échange des blocs de 8 bits
    num = ((num & 0xFF00FF00) >> 8) | ((num & 0x00FF00FF) << 8);
    // Étape 3 : Échange des blocs de 4 bits
    num = ((num & 0xF0F0F0F0) >> 4) | ((num & 0x0F0F0F0F) << 4);
    // Étape 4 : Échange des blocs de 2 bits
    num = ((num & 0xCCCCCCCC) >> 2) | ((num & 0x33333333) << 2);
    // Étape 5 : Échange des bits individuels
    num = ((num & 0xAAAAAAAA) >> 1) | ((num & 0x55555555) << 1);

    return num;
}

int main() {
    int a, b, c;
    scanf("%i", &a);
    scanf("%i", &b);
    c = 1;
    c <<= b;
    c = reverseBits(c);
    a &= c;
    printf("%i", a);
    return 0;
}
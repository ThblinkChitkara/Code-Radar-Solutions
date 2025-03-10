#include <math.h>

int isPrime(int a) {
    if (a < 2) return 0; // 0 et 1 ne sont pas premiers
    if (a == 2) return 1; // 2 est le seul nombre premier pair
    if (a % 2 == 0) return 0; // Élimination des nombres pairs

    for (int i = 3; i <= a; i += 2) {
        if (a % i == 0) return 0; // Si divisible, ce n'est pas un nombre premier
    }
    return 1; // Si aucun diviseur trouvé, alors premier
}
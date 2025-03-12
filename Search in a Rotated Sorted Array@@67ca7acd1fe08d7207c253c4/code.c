#include <stdio.h>

int searchInRotatedArray(int arr[], int n, int target) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        // Vérifier quelle partie est triée
        if (arr[left] <= arr[mid]) { // La partie gauche est triée
            if (arr[left] <= target && target < arr[mid])
                right = mid - 1; // Chercher à gauche
            else
                left = mid + 1; // Chercher à droite
        } else { // La partie droite est triée
            if (arr[mid] < target && target <= arr[right])
                left = mid + 1; // Chercher à droite
            else
                right = mid - 1; // Chercher à gauche
        }
    }
    return -1; // Si l'élément n'est pas trouvé
}
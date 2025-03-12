#include <stdio.h>

int findOccurrence(int arr[], int n, int target, char mode) {
    int left = 0, right = n - 1, result = -1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target) {
            result = mid;
            if (mode == 'F') {
                right = mid - 1; // Cherche à gauche pour la première occurrence
            } else {
                left = mid + 1; // Cherche à droite pour la dernière occurrence
            }
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return result;
}
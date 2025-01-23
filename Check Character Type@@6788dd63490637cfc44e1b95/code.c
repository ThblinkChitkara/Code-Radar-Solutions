#include <stdio.h>

char* vowel_or_consonant(char a){
    return switch a {
        case "a":
            "Vowel";
        case "e":
            "Vowel";
        case "i":
            "Vowel";
        case "o":
            "Vowel";
        case "u":
            "Vowel";
        case "y":
            "Vowel";
        default :
            "Consonant";
    }
}

int main() {
    char a;
    printf("s");
    return 0;
}
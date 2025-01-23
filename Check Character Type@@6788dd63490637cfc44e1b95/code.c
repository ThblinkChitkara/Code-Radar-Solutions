#include <stdio.h>

char* vowel_or_consonant(char a){
    switch a {
        case "a":
            return "Vowel";
        case "e":
            return "Vowel";
        case "i":
            return "Vowel";;
        case "o":
            return "Vowel";
        case "u":
            return "Vowel";
        case "y":
            return "Vowel";
        default :
            return "Consonant";
    }
}

char* vowel_or_consonant_MAJ(char a){
    switch a {
        case "a":
            return "Vowel";
        case "e":
            return "Vowel";
        case "i":
            return "Vowel";;
        case "o":
            return "Vowel";
        case "u":
            return "Vowel";
        case "y":
            return "Vowel";
        default :
            return "Consonant";
    }
}

int main() {
    char a;
    scanf("%c", &a);

    printf("%s", 
    (a >= 'a' && a <= 'z') ? vowel_or_consonant(a) :
    (a >= 'A' && a <= 'Z') ? vowel_or_consonant_MAJ(a) :
    (a >= '0' && a <= '9') ? "Digit" : "Special Character"
    );
    return 0;
}
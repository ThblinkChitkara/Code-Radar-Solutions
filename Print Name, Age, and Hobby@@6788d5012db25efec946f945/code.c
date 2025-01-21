#include <stdio.h>


int main() {
    char* name = malloc(sizeof(char)*30);
    char* age = malloc(sizeof(char)*30);
    char* hobby = malloc(sizeof(char)*30);
    scanf("%s", name);
    scanf("%s", age);
    scanf("%s", hobby);

    printf("Name: %s\nAge: %s\nHobby: %s", name, age, hobby);
    return 0;
}
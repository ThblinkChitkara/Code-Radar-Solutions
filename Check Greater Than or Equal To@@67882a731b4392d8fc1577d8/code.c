#include <stdio.h>



int main(int argc, char** argv) {
    long a = argv[1];
    long b = argv[2];
    char* rep = (a >= b) ? "True" : "False";
    printf(rep);
    return 0;
}
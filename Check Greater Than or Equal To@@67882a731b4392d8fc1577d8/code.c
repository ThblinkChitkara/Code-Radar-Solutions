#include <stdio.h>



int main(int argc, char** argv) {
    long a = atoi(argv[1]);
    long b = atoi(argv[2]);
    char* rep = (a >= b) ? "True" : "False";
    return 0;
}
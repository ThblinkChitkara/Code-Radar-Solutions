int isPrime(int a){
    int rep = 1;
    for (int i = 2; i < a/2 && rep; i++){
        rep = (a%i != 0);
    }
    return rep;
}
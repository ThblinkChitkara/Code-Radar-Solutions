#include <stdio.h>

int main() {
int a;
scanf ("%i", &a);
printf("%s", a == 1 ? "Monday" : a == 2 ? "Tuesday" : a == 3 ?
"Wednesday"
: a == 4 ? "Thursday" : a == 5 ? "Friday" : a == 6 ?
"Saturday" : a == 7 ? "Sunday" : "Invalid" );
return 0;
}
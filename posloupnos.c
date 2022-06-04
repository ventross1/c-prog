#include <stdio.h>
#include <math.h>

//n, jako počet požadovaných prvků, je určen [(d + 1) děleno 3 beze zbytku]
int main(){
int n = 0;
int pole[n];

for(int d = 0; d < 23; d = d + 3){
n = n + 1;
pole[n] = d;
}

printf("pole[%i] = %i\n", n, pole[n]);

return 0;
}
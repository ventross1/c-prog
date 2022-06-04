#include <stdio.h>
#include <math.h>

int main(){
    int n = 0;
    int pole[n];

for(int d = 0; d < 24; d = d + 3){
    n ++;
    pole[n] = d;
    printf("pole[%i] = %i\n", n, pole[n]);
}

return 0;
}
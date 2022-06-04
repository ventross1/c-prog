#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<math.h>

int maximum(int x, int y){
return x > y ? x : y; // učitelův způsob
/*    if(x > y){
        return x;
    }else{          můj způsob
    return y;
    }
*/}

int max(int *cisla, int n){
    int max = 0;
    for(int i = 1; i < n; i++){
        
        if(max < *(cisla + i))
        {
        max = *(cisla + i);
        }
    }
return max;
}


int main(){    
int numeros[] = {8, 16, 100, 7, 3, 4, 9, 42, 18};
    printf("%i", max(numeros, sizeof(numeros) / 4));
    return 0;
}
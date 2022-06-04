#include <stdio.h>
#include <math.h>
//int x = 18;
//int y = 4;
//int b = 0;
int minimum(int x, int y){
    if(x < y){
        return x;
    }
    return y;
}
//int sudeliche(){
//    if(x % 2){

//    }
//}

int maxdelitel(int x, int y){
for(int delitel = minimum(x, y); delitel > 1; delitel--){

if(y % delitel == 0 && x % delitel == 0){
    return x;
} else{return y;}

}
}
int main(){
    printf("%i\n", maxdelitel(5, 20));
    return 0;
}
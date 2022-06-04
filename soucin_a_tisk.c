#include <stdio.h>
#include <math.h>

int maxdelitel(citatel, jmenovatel, int delitel){
    if(citatel <= jmenovatel){
    return delitel;}
    else{return 0;}
}

void soucin_a_tisk(int a, int b, int c, int d){
    int citatel = a * b;
    int jmenovatel = c * d;
    int delitel = maxdelitel(citatel, jmenovatel);
    citatel /= delitel;
    jmenovatel /= delitel;
    printf("%i/%i * %i/%i = ", a, b, c, d);
    printf("%i/%i\n", citatel, jmenovatel);
}

int main(){
    printf(soucin_a_tisk(1,2,2,4));
}
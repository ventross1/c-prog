#include <stdio.h>
#include<math.h>

float c = 5;
float al = 90;
float ga = 45;
float de = 45;
float s;

//float strana_b(){
//    b = c * ga/al;
//    return b;
//}

float strana_a(float a){
    a = c * de/al;
    return a;
}
float obsah(float a, float s){
    s = a * a / 2;
    return s;
}

int main(){
    printf("s=%f", s);
    return 0;
}
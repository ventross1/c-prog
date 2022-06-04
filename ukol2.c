#include <stdio.h>
#include <math.h>

float degToRad(float x){
    x = x * 0.0174532925;
    return x;
}

float radToDeg(float x){
    x = x / 0.0174532925;
    return x;
}



int main(){
    for(float i = 0; i != 390; i = i + 30){
        printf("%.0f;   %.11f;   %.11f;   %.11f \n", i, degToRad(i), sin(degToRad(i)), cos(degToRad(i)));
    }
    return 0;
}
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float r_to_d(float y){
    y = y / 0.0174532925;
    return y;
}

float d_to_r(float y){
    y = y * 0.0174532925;
    return y;
}

int main(){
    for(float i = 0; i <= 360; i += 30){
        printf("%.f; %f; %f; %f \n", i, d_to_r(i), sin(d_to_r(i)), cos(d_to_r(i)));
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float getdist(int xa, int ya, int xb, int yb){
    int dx = xa - xb;
    int dy = ya - yb;
    return sqrt(dx * dx + dy * dy);
}

float lenght(int points[][2], int cnt){
    for(int i = 0; i < cnt - 1; i++){
        lenght += getdist(points[i][0],points[i][1],
        points[i + 1][0], points[i + 1][1]);
    }
    return lenght;
}

int main(){
    int points[0][2] = {(0,0), (1,2), (2,-4)};
    printf("lenght = %f\n", lenght(points, 5));
    return 0;
}
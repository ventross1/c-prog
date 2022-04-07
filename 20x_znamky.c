#include <stdio.h>
#include <stdlib.h>
int n = 0;
int x = 0;
int y = 1;
float average;
int main(){
    //srand(time(NULL))
    float p[20] = {0.0};
    int i;
    for(i=0; i<20; i++){
        p[i] = rand() %9 /2. + 1;
        printf("čísla %.2f\n", p[i]);
    }
    for(i = 0; i < 20; i++){
        x = p[i];
        y = p[i] - 1;
        average = (float) (x + y)/2;
        printf("average %.2f\n", average);
    }
    return 0;
}

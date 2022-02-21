#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int mujRandom(int min, int max)
{
    return (rand() % (max - min)) + min;
}
int main()
{
    /*
       *
      oXX
     XoXoX
    XXoXXoX
       |
    */
    int height = 9;
    int width = 1;
    srand(time(NULL));
    printf("%d\n", mujRandom(100, 150));
    for (int j = 0; j < height - 1; j++)
    {
        printf(" ");
    }
    printf("*\n");
    for (int i = 0; i < height - 1; i++)
    {
        for (int j = 0; j < height - 1 - i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < width; j++)
        {
            printf("%c", mujRandom(1, 100) < 25 ? 'o' : 'X');
        }
        width += 2;
        printf("\n");
    }
    for (int j = 0; j < height - 1; j++)
    {
        printf(" ");
    }
    printf("I\n");
    return 0;
}

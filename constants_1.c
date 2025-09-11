/* program declaring constants */

#include<stdio.h>

int main()
{
    // variables defined 
    int c1 = 10;
    float c2 = 10.10;
    char c3 = 's';

    printf("Constant c1, c2 and c3 are: %d, %.2f and %c.\n",c1,c2,c3);

    // taking input
    int c4;
    float c5;
    char c6;

    printf("Eneter an integer, real and character value: ");
    scanf("%d%f%c",&c4,&c5,&c6);
    printf("Constant c4, c5 and c6 are: %d, %.2f and %c.\n",c4,c5,c6);

    // taking input
    int c7;
    float c8;
    char c9;

    printf("Eneter an integer, real and character value: ");
    scanf("%d%f%c", &c7, &c8, &c9);
    printf("Constant c7, c8 and c9 are: %d, %.2f and %c.\n",c7,c8,c9);

    return 0;
}
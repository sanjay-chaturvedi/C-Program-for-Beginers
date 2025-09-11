/* program to take inputs from the user and the problems with scanf() */
/* seprate the format specifiers in the scanf function by space, tab or newline */
/* for scanf() to know that user has given the input, press enter/return key */
/* issue with garbage value in the input buffer when calling scanf() */

#include<stdio.h>

int main()
{
    // variables defined 
    int c1 = 10;
    float c2 = 10.10;
    char c3 = 's';

    printf("Variables c1, c2 and c3 are: %d, %.2f and %c.\n",c1,c2,c3);

    // taking input: no space between the format specifiers lead to incorrect reading of inputs (%d%f%c)
    // In this call to scanf function , when I enter values <1010.10s>, the output I get is <1010 0.10 s>,
    // when I enter values <10 10.10 s>, the output I get is <10 10.10 empty>, additionally in the latter case
    // I do not get any prompt to enter input for the second scanf() call. This is due to garbage value already present in the buffer.
    int c4;
    float c5;
    char c6;

    printf("Eneter an integer, real and character value: ");
    scanf("%d%f%c",&c4,&c5,&c6);
    printf("Variables c4, c5 and c6 are: %d, %.2f and %c.\n",c4,c5,c6);

    // cleaning the input buffer after the previous call to scanf()
    // In this call to scanf function , when I enter values <10 10.10 s>, the output I get is <10 10.10 s>,
    // when I enter values <1010.10s>, the output I get is <1010 0.10 s>, so enter value with a space sepration.

    int test;
    while((test = getchar()) != '\n' && test != EOF);
    

    // taking input: space between the format specifiers solves the above problem (%d %f %c)
    int c7;
    float c8;
    char c9;

    printf("Eneter an integer, real and character value: ");
    scanf("%d %f %c", &c7, &c8, &c9);
    printf("Variables c7, c8 and c9 are: %d, %.2f and %c.\n",c7,c8,c9);
    

    return 0;
}
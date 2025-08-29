/* program to implement a macro, function and inline function */
/* 
also looking into a case where use of macro gives wrong result, hence
use of inline function is better choice in such cases.
*/

#include<stdio.h>

// macro
#define add1(x,y) x+y

// using below macro instead of the above one, solves the problem
/* #define add1(x,y) (x+y) */ 

// prototype: normal function
int add2(int,int);

// prototype: inline function
inline int add3(int,int);

// main
int main(void)
{
    int a, b;
    a = 0; b = 0;

    printf("Enter first number a: ");
    scanf("%d",&a);
    printf("Enter second number b: ");
    scanf("%d",&b);

    // call the macro, function and inline function
    printf("\nSum of a and b by macro is:           %d", add1(a,b));
    printf("\nSum of a and b by function is:        %d", add2(a,b));
    printf("\nSum of a and b by inline-function is: %d", add3(a,b));
    printf("\n");
    printf("\nUse of macro leading to incorrect result !!\n");
    printf("\nTwice sum of a and b by macro is:           %d", 2*add1(a,b));
    printf("\nTwice sum of a and b by function is:        %d", 2*add2(a,b));
    printf("\nTwice sum of a and b by inline-function is: %d", 2*add3(a,b));

    return 0;
}

// function definnition
int add2(int x, int y)
{
    int sum; sum = 0;
    sum = x + y;
    return sum;
}

// inline function definition
int add3(int x, int y)
{
    int sum; sum = 0;
    sum = x + y;
    return sum;
}
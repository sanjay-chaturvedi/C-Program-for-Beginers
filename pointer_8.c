/* program with function taking and returning pointes */
/* passing pointer to a function and returning pointer from a function */

#include<stdio.h>

// function prototype
int* funPointer(int*,int*);

int main(void)
{
    // integer variables
    int num1 = 10;
    int num2 = 20;

    // pointer to integer variable
    int* pnum1 = &num1;
    int* pnum2 = &num2;

    // calling the function
    printf("Addition of num1 and num2 is: %d", *funPointer(pnum1,pnum2));

    return 0;
}

// function definition
int* funPointer(int* x, int* y)
{
    static int sum;
    sum = *x + *y;
    return &sum;    // function funPointer returning the address of static int variable sum
}
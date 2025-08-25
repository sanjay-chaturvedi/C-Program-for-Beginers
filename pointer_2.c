/* using pointers to change values of variables defined in a function from another function */

#include<stdio.h>

// function prototype
int changeValue(int*,int*);


int main()
{
    int a = 10, b = 20;

    // displaying value stored at a and b
    printf("a = %d, b = %d\n",a,b);

    // declaring integer pointer(int*) to a and b
    int* pa;
    int* pb; 

    // assigning address of variables to pointers
    pa = &a;
    pb = &b;
    
    // calling the function and passing pointers as arguments
    changeValue(pa, pb);

    // displaying value after changeValue
    printf("a = %d, b = %d\n",a,b);

    return 0;
}

// function defintion (pass-by-reference)
int changeValue(int* x, int* y)
{
    // dereferencing pointers x and y
    *x = 1; 
    *y = 2;
}
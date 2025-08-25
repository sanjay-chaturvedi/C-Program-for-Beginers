/* program to get familiar with pointer syntax: decleration, assignment, access */

#include<stdio.h>

int main()
{
    int x = 40;     // integer type variable

    int* px;        // decleration of pointer to variable x 
    px = &x;        // assignment of variable address to pointer

    int** ppx;      // pointer to above declared pointer px
    ppx = &px;      // assigning address of px    

    int*** pppx;    // pointer to above declared pointer ppx
    pppx = &ppx;    // assigning address of ppx

    printf("Vaule assigned to x : %d\n",x);
    printf("Address in pointer px   : %p, value at address : %d\n",px,*px);     // access value of x through pointer px
    printf("Address in pointer ppx  : %p, value at address : %p\n",ppx,*ppx);   // access value of ppx
    printf("Address in pointer pppx : %p, value at address : %p\n",pppx,*pppx); // access value of pppx
    printf("\n");

    // additional lines of code for curious minds
    printf("Some experiments with a pointer(pppx) to a pointer(ppx):\n");
    printf("Address in pointer pppx : %p, value at address : %p\n",pppx,*pppx); // pointer format specifier
    printf("Address in pointer pppx : %p, value at address : %X\n",pppx,*pppx); // hexadecimal format specifier
    printf("Address in pointer pppx : %p, value at address : %d\n",pppx,*pppx); // integer format specifier

    return 0;
}

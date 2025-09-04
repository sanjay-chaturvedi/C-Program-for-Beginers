#include<stdio.h>

int main()
{
    // Array initialization with curly braces can only be done at the time of declaration,
    // and not with a separate assignment statement. 
    /*int arr1[5];
    arr1 = {1,2,3,4,5}; */

    /*======================================*/
    // Array declaration and array intialization of individual element
    /*int arr1[5];
    arr1[0] = 1; arr1[1] = 2; arr1[2] = 3; arr1[3] = 4; arr1[4] = 5;*/ 

    /*======================================*/
    // Array intialization with curly braces at the time of declaration(with array size)
    /*int arr1[5] = {1,2,3,4,5};*/

    /*======================================*/
    // Array intialization with curly braces at the time of declaration(without array size)
    /*int arr1[] = {1,2,3,4,5};*/

    /*======================================*/
    // An array of name arr1 with one element is initalized with zero
    // If elements beyond the array size are accessed, then C language 
    // does not give any out of bound error and prints the value present
    // in the pointed loactions.
    /*int arr1[] = {0};*/

    /*======================================*/
    // Array of five elements and all initialized to zero
    int arr1[5] = {0};


    for(int i=0; i<5;i++)
    {
        printf("Array element %d = %d \n",i,arr1[i]);
    }

    return 0;
}
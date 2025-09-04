#include<stdio.h>

int main()
{
    // Array initialization with curly braces can only be done at the time of declaration,
    // and not with a separate assignment statement. 
    /*int arr1[5];
    arr1 = {1,2,3,4,5}; */

    // Array declaration and array intialization of individual element
    /*int arr1[5];
    arr1[0] = 1; arr1[1] = 2; arr1[2] = 3; arr1[3] = 4; arr1[4] = 5;*/ 

    // Array intialization with curly braces at the time of declaration(with array size)
    /*int arr1[5] = {1,2,3,4,5};*/

    // Array intialization with curly braces at the time of declaration(without array size)
    int arr1[] = {1,2,3,4,5};

    for(int i=0; i<5;i++)
    {
        printf("Array element %d = %d \n",i,arr1[i]);
    }

    return 0;
}
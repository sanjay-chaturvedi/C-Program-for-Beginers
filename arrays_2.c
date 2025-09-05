/* program with an array and using pointers to simulate array like behaviour */
/* when using pointers after an array, the pointer can use the same memory locations 
as used by the array, this will lead to problems where array elements are changed.*/

#include<stdio.h>

int main(void)
{
    // array arr_1
    int arr_1[3] = {10,20,30};
    printf("Array element 1 address %p and value %d\n",&arr_1[0],arr_1[0]);
    printf("Array element 2 address %p and value %d\n",&arr_1[1],arr_1[1]);
    printf("Array element 3 address %p and value %d\n",&arr_1[2],arr_1[2]);

    // pointer part
    int arr_2 = 11; 
    int* parr_2;        // pointer to integer vaiable arr_2
    parr_2 = &arr_2;    // assigning to the pointer
    printf("Pointed element 1 address %p and value %d\n",parr_2,*parr_2);

    parr_2++;           // increment pointer by 1
    *parr_2 = 21;       // store 21 at pointed location
    printf("Pointed element 2 address %p and value %d\n",parr_2,*parr_2);

    parr_2 +=1;         // increment pointer by 1
    *parr_2 = 31;       // store 31 at pointed location
    printf("Pointed element 3 address %p and value %d\n",parr_2,*parr_2);

    // VIMP: Checking if overlapping occuring or not
    // What if the pointers are pointing to the locations being used by the array?
    // If so, then if we access the array address and value after the pointer part
    // we will be not be getting the values assigned to array at very begining.
    printf("Array element 1 address %p and value %d\n",&arr_1[0],arr_1[0]);
    printf("Array element 2 address %p and value %d\n",&arr_1[1],arr_1[1]);
    printf("Array element 3 address %p and value %d\n",&arr_1[2],arr_1[2]);

    return 0;
}
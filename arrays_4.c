/* program to check pointer arithematic on array name */
/* Although the array name works like a pointer to array element 0,
    but pointer arithematic does not work on array name, its invalid. */

#include<stdio.h>

int main(void)
{
    int arr_1[4] = {10,20,30,40};

    // array name as a pointer to element 0 of address
    printf("Address of arr_1[0] using address-of: %p\n",arr_1);

    // pointer to arr_1[0]
    int* parr_1_element_0 = &arr_1[0];
    printf("Address of arr_1[0] using pointer   : %p\n",parr_1_element_0);
    printf("arr_1[0] = %d, and by pointer = %d\n",arr_1[0],*parr_1_element_0);

    // increment pointer by 3 to get to last array elemnt
    parr_1_element_0 = parr_1_element_0 + 3;
    printf("Address of arr_1[3] using pointer   : %p\n",parr_1_element_0);
    printf("arr_1[3] = %d, and by pointer = %d\n",arr_1[3],*parr_1_element_0);

    // INVALID: increment the array name like the pointer
    /*arr_1 = arr_1 + 3;*/

    return 0;
}
/* arrays and pointers: address of array elemnt 0 using different ways */
/* array name is itself a pointer to memory address of element 0 of array */

 #include<stdio.h>
 #include<stdint.h>

 int main(void)
 {
    int arr_1[4] = {10,20,30,40};

    // pointer to element 0 of arr_1 which is equivalent to array name arr_1
    int* parr_1_elememt0 = &arr_1[0];

    printf("The address of element 0 of arr_1 by pointer    : %p\n",parr_1_elememt0);
    printf("The address of element 0 of arr_1 by array name : %p\n",arr_1);
    printf("The address of element 0 of arr_1 by addreess-of: %p\n",&arr_1[0]);
    printf("\n");
    printf("The address of elemnent 0 of arr_1 by addreess-of: %X\n",&arr_1[0]);
    printf("The address of elemnent 0 of arr_1 by addreess-of: %X\n",(unsigned long long)&arr_1[0]);
    printf("The address of elemnent 0 of arr_1 by addreess-of: %X\n",(uintptr_t)&arr_1[0]);

    return 0;
 }
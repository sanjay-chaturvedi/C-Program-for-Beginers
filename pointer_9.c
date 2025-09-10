/* arrays and pointer concept in array passing */
/* problems with using sizeof on array function parameter (array name) */
/* how to address the above issue of using the sizeof within the function on array parameter */

#include<stdio.h>

// function prototype
void funArray(int arr[]);
void funArray1(int arr[],int);

int main()
{
    int arr_1[] = {1,2,3,4};
    int arr_size = sizeof(arr_1)/sizeof(arr_1[0]);
    printf("Size of array in main: %d\n",arr_size);
    for(int i=0; i<arr_size; i++)
        printf("%d  ",arr_1[i]);
    printf("\n");
    funArray(arr_1);
    printf("\n");
    funArray1(arr_1,arr_size);

    return 0;
}

// function definiton
void funArray(int arr[])
{
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    printf("Size of array in funArray: %d\n",arr_size);
    for(int i=0; i<arr_size;i++)
        printf("%d  ",arr[i]);
}

void funArray1(int arr[], int arr_size)
{
    printf("Size of array in funArray1: %d\n",arr_size);
    for(int i=0; i<arr_size;i++)
        printf("%d ",arr[i]);
}
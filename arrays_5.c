/* program to traverse aray elements */
#include<stdio.h>

int main(void)
{
    int arr_1[5] = {10,20,30,40,50};
    int size_arr_1 = sizeof(arr_1)/sizeof(arr_1[0]);

    // using while
    int i = 0;
    while(i <size_arr_1)
    {
        printf("%d  ",arr_1[i]);
        i++;
    }

    printf("\n");

    // using for loop
    for(int i = 0;i<size_arr_1;i++)
    {
        printf("%d  ",arr_1[i]);
    }

    return 0;    
}
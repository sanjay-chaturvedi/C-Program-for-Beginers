/* pointers to functions, observe the similarity between "array name being a pointer" and
"function name being a pointer" */

#include<stdio.h>

// function prototype
void display(void);

int main()
{
    // function's address is pointed by function name
    printf("Address of the function display() is %p\n",display);
    display();

    // array's address is pointed by array name
    int arr_1[3] = {10,20,30};
    printf("Address of the array arr_1 is %p\n", arr_1);
    
    return 0;
}

void display(void)
{
    printf("This is the display function\n");
}
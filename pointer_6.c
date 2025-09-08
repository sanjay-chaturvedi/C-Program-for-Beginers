/* pointers to functions */
/* calling a function using a function pointer */

#include<stdio.h>

// function prototype, prototype is necessary to point to a function's address
void display(void);

int main(void)
{
    printf("Address of function display() is %p\n",display);

    // function call display
    display();

    printf("Address of the function printf() is %p\n",printf);

    // function call using funcction pointer
    void(*pdisplay)();  // declaring the pointer to function dispaly()
    pdisplay = display; // assigning the address of function display() to pointer
    (*pdisplay)();      // calling the display() function via function pointer

    return 0;
}

// function definiton, definiton is also necessary in using pointer to functions address
void display(void)
{
    printf("Display function called\n");
}

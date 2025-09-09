/* program with a function returning a pointer */
/* the address of variables within the scope of function can not be returned: getNumber1() */
/* the address of static variables defined within function is returned: getNumber2() */

#include<stdio.h>

// function prototype
int* giveNumber1();
int* giveNumber2();

int main(void)
{
    // for function giveNumber1()
    int* pointer_var1;
    pointer_var1 = giveNumber1(); // remember when calling a function, using braces is a must
    printf("The value returned by giveNumber1 is: %p\n", pointer_var1);

    // for function giveNumber2()
    int* pointer_var2;
    pointer_var2 = giveNumber2();
    printf("The value returned by giveNumber2 is: %p\n", pointer_var2);

    return 0;
}

// function definiton: local variable address CAN NOT be returned
int* giveNumber1()
{
    int number = 22;
    printf("Address of variable number is: %p\n",&number);
    return &number;
}

// function definiton: STATIC variable address is returned
int* giveNumber2()
{
    static int number = 22;
    printf("Address of variable number is: %p\n",&number);
    return &number;
}
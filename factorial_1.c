/* program to find the factorial of a number */

#include <stdio.h>

// function prototype
int factorial(int);

// main function
int main(void)
{
    int num;
    printf("Eneter the number: ");
    scanf("%d", &num);

    int num_factorial;

    // calling the function
    num_factorial = factorial(num);
    printf("The factorial of the number is: %d", num_factorial);

    return 0;
}

// function definition
int factorial(int num)
{
    int num_factorial; // this variable is not the same as defined in main()
    num_factorial = num;

    for (int i = 1; i < num; i++)
    {
        num_factorial = num_factorial * (num - i);
    }

    return num_factorial;
}
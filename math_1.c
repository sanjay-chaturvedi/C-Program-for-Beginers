/* program to take a two digit number from the user and print the one's and
    ten's digit */

/* Idea: divide number by 10, quotient is the digit at ten's place;
         modulus number by 10, remainder is the digit at one's place */

#include<stdio.h>

int main(void)
{
    int num;
    printf("Enter a two digit number: ");
    scanf("%d",&num);

    int tens, ones;
    tens = num/10;      // division
    ones = num%10;      // modulus 

    printf("Ones digit of the number is %d\n",ones);
    printf("tens digit of the number is %d\n",tens);

    int num_reversed;
    num_reversed = ones*10 + tens;      // multiplication, addition
    printf("Reversed number is: %d\n",num_reversed);

    int digit_sum;
    digit_sum = tens + ones;        // addition
    printf("Sum of digits is: %d\n",digit_sum);

    return 0;

}
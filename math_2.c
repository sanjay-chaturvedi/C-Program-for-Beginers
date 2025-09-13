/* Take any integer number as input from the user and find
 - number of digits
 - digita at ones, tens, hundreds place etc.
 - reverse all digits
 - sum of all digits */

 #include<stdio.h>

 // function prototype, taking a pointer and returning a pointer
 int* num_of_digits(int*);
 int int_power(int,int);


 // function main
 int main(void)
 {
   int num = 0;
   printf("Enter the number: ");
   scanf("%d",&num);

   printf("Number of digits: %d\n",*num_of_digits(&num));

   int base = 0, power = 0;
   printf("Enter the base number and the exponent:");
   scanf("%d %d",&base,&power);
   printf("Output of int_power function is: %d\n",int_power(base,power));

   return 0;
 }

 // function definition
 int* num_of_digits(int* pnum)
 {
    int num = *pnum;
    static int digit_count = 0;

    while (num != 0)
    {
      num = num/10;
      digit_count++;
    }
    
    return &digit_count;
 }

 // function power
 int int_power(int base, int exp)
 {
    int out = base;
    for(int i = 2; i <= exp; i++)
    {
      out = out*base;
    }

    return out;
 }

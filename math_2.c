/* Take any integer number as input from the user and find
 - number of digits
 - digita at ones, tens, hundreds place etc.
 - reverse all digits
 - sum of all digits */

 #include<stdio.h>
 #include<math.h>

 // function prototype
 int num_of_digits(int*);

 // function main
 int main(void)
 {
   int num;
   printf("Enter the number: ");
   scanf("%d",&num);

   int* pnum = &num;
   int digit_count;
   digit_count = num_of_digits(pnum);
   printf("Number of digits: %d",digit_count);

   return 0;
 }

 // function definition
 int num_of_digits(int* pnum)
 {
    int num, digit_count;
    num = *pnum; 

    num/10



    return digit_count;
 }

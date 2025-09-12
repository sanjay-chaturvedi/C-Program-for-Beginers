/* constant */

#include<stdio.h>

int main(void)
{
    const int a = 10;
    int b = 20;

    printf("Constant is %d and variable is %d\n",a,b);
    // below statement leads to compiler error as constant value can not be changed
    /* a = a + 1; */
    b = b + 1;
    printf("Constant is %d and variable is %d\n",a,b);

    return 0;
}
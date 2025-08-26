#include<stdio.h>

// function prototype
void paramCalculator(float,float*,float*);

// main function
int main(void)
{
    // declaring variable to take user input on length of square side
    float square_side;
    printf("Enter the length(m) of square side: ");
    scanf("%f",&square_side);

    // declaring variables to hold area and perimeter value
    float square_area, square_perimeter;   

    // declaring and assigning pointer variables
    float* psquare_area; 
    psquare_area = &square_area;

    float* psquare_perimeter; 
    psquare_perimeter = &square_perimeter;

    // calling the function
    paramCalculator(square_side,psquare_area,psquare_perimeter);

    printf("Area of square: %.2f sq-m\n",square_area);
    printf("Perimeter of square: %.2f m\n",square_perimeter);

    return 0;
}

// function definition
void paramCalculator(float square_side,float* psquare_area,float* psquare_perimeter)

{
    *psquare_area = square_side*square_side;
    *psquare_perimeter = 4*square_side;
}
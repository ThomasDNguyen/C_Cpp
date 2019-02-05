/*
Make a function that calculates and prints equation y=x^2 by using four x values. For the function x values are passed as a parameter.
For example:

Test						  |	Result
--------------------------------------
y_values(1.5, 3.4, 4.8, 5.5)  | 2.25
							  | 11.56
							  | 23.04
							  | 30.25
*/

#include <stdio.h>
#include <math.h>

//function prototype(s)
void y_values(double x1, double x2, double x3, double x4);

/*---------------------------------------------------------------------------------------------------------------------------------*/
//main function
int main(void)
{
	y_values(1.5, 3.4, 4.8, 5.5);
	return 0;
}//end main

/*---------------------------------------------------------------------------------------------------------------------------------*/
//fuction(s) declaration
void y_values(double x1, double x2, double x3, double x4)
{
	double x_values[4] = {x1, x2, x3, x4};
	double result;
    for(int i=0; i<4; i++)
    {
    	result = pow(x_values[i], 2);
    	printf("%.2f\n", result);
    }
}//end y_values
/*
Make a function that converts thousandth of an inch (thou) to millimeters (mm) and returns decimal number of (mm). A integer value
of thousandth of an inch (1 thou - 100 thou) is passed as a parameter to the function. thou = mils.
For example:

Test						  	  |	Result
------------------------------------------
unsigned int thou=100;		  	  | 2.5400
printf("%.4f",thou_to_mm(thou));  |
*/

#include <stdio.h>
#include <math.h>

//function prototype(s)
double thou_to_mm(double thou);

/*---------------------------------------------------------------------------------------------------------------------------------*/
//main function
int main(void)
{
	unsigned int thou=100;
	printf("%.4f\n",thou_to_mm(thou));
	return 0;
}//end main

/*---------------------------------------------------------------------------------------------------------------------------------*/
//fuction(s) declaration
double thou_to_mm(double thou)
{
	double result;
	result = thou*0.0254;
	return result;
}//end thou_to_mm
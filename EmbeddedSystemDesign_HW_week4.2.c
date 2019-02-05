/*
Make a function that calculates the quadratic equation roots and prints the result. Variables a, b and c are passed as a parameter to 
the function. If complex roots (4*a*c)>=b^2 then system will inform "error complex roots".
For example:

Test				| Result
-----------------------------------------------------
quadratic_equation(15,15,5);	| error complex roots
-----------------------------------------------------
quadratic_equation(1,15,5);	| x1=-0.34              
				| x2=-14.66
*/

#include <stdio.h>
#include <math.h>

//function prototype(s)
void quadratic_equation(double a,double b,double c);

/*---------------------------------------------------------------------------------------------------------------------------------*/
//main function
int main(void)
{
	quadratic_equation(15,15,5);
	quadratic_equation(1,15,5);
	return 0;
}//end main

/*---------------------------------------------------------------------------------------------------------------------------------*/
//fuction(s) declaration
void quadratic_equation(double a,double b,double c)
{
	double delta = sqrt(pow(b, 2) - 4*a*c);
	double x1 = (-b + delta)/(2*a);
    double x2 = (-b - delta)/(2*a);
    if (x1 != x1)
        printf("error complex roots\n");
    else printf("x1=%.2f\nx2=%.2f\n", x1, x2);
}//end quadratic_equation

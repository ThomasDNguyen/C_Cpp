/*
									**************************************************************
									* NOTE: This code has already been modified after submission *
									**************************************************************

Problem: 
	* Make a function that calculates and prints the result of symbolic derivative (d/dx)[(1/2)*x^6] = (6/2)*x^5 = 3x^5 and comparable
	 numerical derivative result. For the function: x, x0 and number of array elements are passed as a parameter.

	* Numerical derivative can be calculated by using central-difference:
					(d/dx)[f(x)] = [f(x+h) - f(x-h)]/(2h)
	Where, 
		(x0 = x + 0.1) and (h = x - x0).

	* Notes:
	- Use 2 decimals in printf function.
	- Symbolic derivative can be calculated with wolframalpha service:
			http://www.wolframalpha.com/widgets/view.jsp?id=a278064e754d61cbecc14f913b8d5295
For example:

Test								  | Result
---------------------------------------------------------------------------------------------------------------
double x_values[10]={1,2,3,4,5,6,7,8,9,10};			  | SD=Symbolic Derivative
double x0_values[10]={1.1,2.1,3.1,4.1,5.1,6.1,7.1,8.1,9.1,10.1};  | ND=Numerical Derivative
int array_size=10;						  | x=1.00 and SD=3.00 and ND=3.10
centraldifference(x_values, x0_values, array_size);		  | x=2.00 and SD=96.00 and ND=96.80
								  | x=3.00 and SD=729.00 and ND=731.70
								  | x=4.00 and SD=3072.00 and ND=3078.40
								  | x=5.00 and SD=9375.00 and ND=9387.50
								  | x=6.00 and SD=23328.00 and ND=23349.60
								  | x=7.00 and SD=50421.00 and ND=50455.30
								  | x=8.00 and SD=98304.00 and ND=98355.20
							          | x=9.00 and SD=177147.00 and ND=177219.90
								  | x=10.00 and SD=300000.00 and ND=300100.00
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

//function prototype(s)
void centraldifference(double x_values[], double x0_values[], int array_size);

/*---------------------------------------------------------------------------------------------------------------------------------*/
//main function
int main(void)
{
	//declare vars
	double x_values[10]={1,2,3,4,5,6,7,8,9,10};
	double x0_values[10]={1.1,2.1,3.1,4.1,5.1,6.1,7.1,8.1,9.1,10.1};
	int array_size=10;

	//functions
	centraldifference(x_values, x0_values, array_size);
	return 0;
}//end main

/*---------------------------------------------------------------------------------------------------------------------------------*/
//fuction(s) declaration
void centraldifference(double x_values[], double x0_values[], int array_size)
{
	//declare vars
	double const oneHalf=0.5;
	double SD[array_size];
	double ND[array_size];

	//functions
	for(int i=0; i<array_size; i++)
		SD[i] = 3*pow(x_values[i], 5);
	for(int j=0; j<array_size; j++)
	{
		double h = x_values[j] - x0_values[j];
		ND[j] = ((oneHalf*pow(x_values[j] + h, 6)) - (oneHalf*pow(x_values[j] - h, 6)))/(2*h);
	}
	//print values
	printf("SD=Symbolic Derivative\nND=Numerical Derivative\n");
	for(int k=0; k<array_size; k++)	
		printf("x=%.2f and SD=%.2f and ND=%.2f\n", (double)x_values[k], SD[k], ND[k]);
}//end centraldifference





/*---------------------------------------------------------------------------------------------------------------------------------*/
/*-----------------------------------------------------TEACHER'S ANSWER------------------------------------------------------------*/
/*---------------------------------------------------------------------------------------------------------------------------------*/
/*
void centraldifference(double *x, double *x0, int myarray)
{
	double h=0;
	double symbolic_derivative=0;
	double numerical_derivative=0;

	printf("SD=Symbolic Derivative\n");
	printf("ND=Numerical Derivative\n");

	for(int i=0;i<myarray;i++)
	{
		h=((*x)-(*x0));
		symbolic_derivative=3*pow((*x),5);
		numerical_derivative=(.5*(pow((*x)+h,6))-(0.5*(pow((*x)-h,6))))/(2*h);

		printf("x=%.2f and SD=%.2f and ND=%.2f\n",*x,symbolic_derivative,numerical_derivative);
	    x++;
	    x0++;
	 }
}
*/

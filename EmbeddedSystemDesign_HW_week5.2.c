/*
Problem: Make a function that calculates the factorial of given integer number and returns the result. The number n is passed as a
parameter. Range for value for n = 0 - 12.
For example:

Test						| Result
---------------------------------------
int n=12;					| 479001600
printf("%ld",factorial(n)); |
---------------------------------------
int n=0;					| 1
printf("%ld",factorial(n));	|
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

//function prototype(s)
long int factorial(int n);

/*---------------------------------------------------------------------------------------------------------------------------------*/
//main function
int main(void)
{
	//declair vars
	int n=12;

	//functions
	printf("%ld\n",factorial(n));
	return 0;
}//end main

/*---------------------------------------------------------------------------------------------------------------------------------*/
//fuction(s) declaration
long int factorial(int n)
{
	//declair vars
	long int result=1;

	//functions
	for(int i=0; i<n; i++)
	{
		
		result = result*(i+1);
	}
	return result;
}//end factorial
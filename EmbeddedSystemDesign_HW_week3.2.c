/*
Make a function that calculates and prints the 2^x where x values are 1-50. For the function x is passed as a parameter.
For example:

Test						  | Result
-------------------------------------------------------------
int calculate_power_until=10; //this can be 1-50  | 2^1=2
my_power(calculate_power_until); 		  | 2^2=4
						  | 2^3=8
						  | 2^4=16
						  | 2^5=32
						  | 2^6=64
						  | 2^7=128
						  | 2^8=256
						  | 2^9=512
						  | 2^10=1024
*/

#include <stdio.h>
#include <math.h>

//function prototype(s)
void my_power(int powervalues);

/*---------------------------------------------------------------------------------------------------------------------------------*/
//main function
int main(void)
{
	int calculate_power_until = 10; //this can be 1-50
	my_power(calculate_power_until);
	return 0;
}//end main

/*---------------------------------------------------------------------------------------------------------------------------------*/
//fuction(s) declaration
void my_power(int powervalues)
{
	double result;
	for(int i=0; i<powervalues; i++)
	{
		result = pow(2, i+1);
		printf("2^%d=%.0f\n",i+1 ,result);
	}
}//end my_power

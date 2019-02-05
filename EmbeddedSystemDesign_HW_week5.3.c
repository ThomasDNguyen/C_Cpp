/*
Problem: Make a function that calculates and returns the surface area of a sphere. The radius of the sphere is passed as a parameter 
to the function. Use pi value 3.14159265358979323846.
For example:

Test					| Result
------------------------------------------------
double radius=4.85;			| 295.59
printf("%.2f",area_of_sphere(radius));	| 
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

//function prototype(s)
double area_of_sphere(double radius);

/*---------------------------------------------------------------------------------------------------------------------------------*/
//main function
int main(void)
{
	//declair vars
	double radius=4.85;

	//functions
	printf("%.2f\n", area_of_sphere(radius));
	return 0;
}//end main

/*---------------------------------------------------------------------------------------------------------------------------------*/
//fuction(s) declaration
double area_of_sphere(double radius)
{
	//declair vars
	const double pi = 3.14159265358979323846;
	double result = 0;

	//functions
	result = 4*pi*pow(radius, 2);
	return result;
}//end area_of_sphere

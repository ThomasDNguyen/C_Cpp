/*
Problem: Make a function that calculates series capacitor circuit or parallel capacitor circuit. For the function capacitor values 
(unit F) C1,C2,C2,Cn and circuit type "serial" or "parallel" and capacitor count are passed as a parameters. Unit for result is µF.
For example:

Test								| Result
----------------------------------------------------------------------------
float C1=10E-6;							| 2.000
float C2=10E-6;							|
float C3=10E-6;							|
float C4=10E-6;							|
float C5=10E-6;							|
								|									|
float capacitor_values[]={C1,C2,C3,C4,C5};			|
int len = sizeof(capacitor_values)/sizeof(capacitor_values[0]);	|
int circuit_type=2; //1=parallel circuit, 2=serial circuit 	|
printf("%.3f",circuit(capacitor_values,circuit_type,len)); 	|
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

//function prototype(s)
float circuit(float capacitor_values[], int circuit_type, int len);

/*---------------------------------------------------------------------------------------------------------------------------------*/
//main function
int main(void)
{
	//declair vars
	float C1=10E-6;
	float C2=10E-6;
	float C3=10E-6;
	float C4=10E-6;
	float C5=10E-6;

	//functions
	float capacitor_values[]={C1,C2,C3,C4,C5};
	int len = sizeof(capacitor_values)/sizeof(capacitor_values[0]);
	int circuit_type=2; //1=parallel circuit, 2=serial circuit
	printf("%.3f\n", circuit(capacitor_values, circuit_type, len));
	return 0;
}//end main

/*---------------------------------------------------------------------------------------------------------------------------------*/
//fuction(s) declaration
float circuit(float capacitor_values[], int circuit_type, int len)
{
	//declair vars
	float result = 0;
	float Csum = 0;

	//functions
	if(circuit_type == 1)
	{
		for(int i=0; i<len; i++)
		{
			Csum = Csum + capacitor_values[i];
		}
		result = Csum*pow(10, 6);
	}
	else if(circuit_type == 2)
	{
		for(int i=0; i<len; i++)
		{
			Csum = Csum + (1/capacitor_values[i]);
		}
		result = (1/Csum)*pow(10, 6);
	}
	else 
		printf("Wrong circuit type!\nPlease enter again... [1 = parallel | 2 = serial]");
	return result;
}//end circuit

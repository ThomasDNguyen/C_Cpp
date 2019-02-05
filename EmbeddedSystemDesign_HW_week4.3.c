/*
Make a function that converts voltage U (V) to unit (dBμV). A voltage U (V) is passed as a parameter to the function.
(Picture of the equation: https://portal.vamk.fi/pluginfile.php/483139/question/questiontext/74396/3/442776/dBuV.jpg)
Where U is voltage and unit V.
For example:

Test						  	  				| Result
-------------------------------------------------------------
double voltage=4.85;							| 133.71 dBuV
printf("%.2f dBuV",voltage_to_dBuV(voltage));	|
-------------------------------------------------------------
double voltage=0.1E-6;							| -20.00 dBuV
printf("%.2f dBuV",voltage_to_dBuV(voltage));	|
*/

#include <stdio.h>
#include <math.h>

//function prototype(s)
double voltage_to_dBuV(double voltage);

/*---------------------------------------------------------------------------------------------------------------------------------*/
//main function
int main(void)
{
	double voltage=4.85;
	printf("%.2f dBuV\n",voltage_to_dBuV(voltage));
	return 0;
}//end main

/*---------------------------------------------------------------------------------------------------------------------------------*/
//fuction(s) declaration
double voltage_to_dBuV(double voltage)
{
	double mvoltage = voltage*pow(10, 6);
    double result = 20*log10(mvoltage);
    return result;
}//end voltage_to_dBuV
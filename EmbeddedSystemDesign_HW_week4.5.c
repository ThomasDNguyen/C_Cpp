/*
Make a function that calculates and prints the Simpson rule from the traditional specified integer∫_a^b▒〖x^2 dx〗. For the function a, 
b and n are passed as a parameter.

Simpson's rule h=(b-a)/n , n is even number, xi=a + i*h and i=0, 1, 2, …, n
∫_a^b▒〖f(x)dx≈h/3[f(x_0 )+4f(x_1 )+2f(x_2 )+4f(x_3 )+⋯+4f(x_((n-1) ) )+f(x_n)]〗
Calculation can be tested with following calculator and two decimal accuracy can be used when print the result:
https://www.emathhelp.net/calculators/calculus-2/simpsons-rule-calculator/
For example:

Test				| Result
------------------------------------------------
int a=1;			| i=0 and f(x1.00)=1.00
int b=16;			| i=1 and 4*f(x8.50)=289.00
int n=2;			| i=2 and f(x16.00)=256.00
simpson(a,b,n);		| result=1365.00
------------------------------------------------
int a=5;			| i=0 and f(x5.00)=25.00
int b=18;			| i=1 and 4*f(x8.25)=272.25
int n=4;			| i=2 and 2*f(x11.50)=264.50
simpson(a,b,n);		| i=3 and 4*f(x14.75)=870.25
					| i=4 and f(x18.00)=324.00
					| result=1902.33
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

//function prototype(s)
void simpson(int lowLim, int upLim, int n);

/*---------------------------------------------------------------------------------------------------------------------------------*/
//main function
int main(void)
{
	int a=5;
	int b=18;
	int n=4;
	simpson(a,b,n);
}//end main

/*---------------------------------------------------------------------------------------------------------------------------------*/
//fuction(s) declaration
void simpson(int lowLim, int upLim, int n)
{
    double result=0;
    double sub_result=0;
    double fcenter = 0;
    double h =(double)(upLim - lowLim)/n;
    int coef;
    printf("i=0 and f(x%.2f)=%.2f\n", (double)lowLim, pow((double)lowLim, 2));
    result = result + pow(lowLim, 2);
    for(int i=1; i<n; i++)
    {
        if(i%2 == 0)
            coef = 2;
        else 
            coef = 4;
        fcenter = lowLim + i*h;
        sub_result = coef*pow(fcenter, 2);
        printf("i=%d and %d*f(x%.2f)=%.2f\n", i, coef, fcenter, sub_result);
        result = result + sub_result;
    }
    printf("i=%d and f(x%.2f)=%.2f\n", n, (double)upLim, pow((double)upLim, 2));
    result = (h/3)*(result + pow(upLim, 2));
    printf("result=%.2f\n", result);
}//end simpson

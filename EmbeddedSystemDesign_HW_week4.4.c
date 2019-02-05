/*
Make a function that converts binary number to decimal number and returns the result. A binary number and length of array are passed as 
a parameter to the function.
For example:

Test						  | Result
----------------------------------------------------------
char binary_number[]="1100";			  | 12
int length=0;					  |
						  |
while(binary_number[length]!='\0')		  |
	{					  |
		length++;			  |
	}					  |
printf("%ld\n",bintodec(binary_number, length));  |
----------------------------------------------------------
char binary_number[]="11111111";		  | 255
int length=0;					  |
						  |
while(binary_number[length]!='\0')		  |
	{					  |
		length++;			  |
	}					  |
printf("%ld\n",bintodec(binary_number, length));  |
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

//function prototype(s)
long int bintodec(char *binary_number, int length);

/*---------------------------------------------------------------------------------------------------------------------------------*/
//main function
int main(void)
{
	char binary_number[]="1111111111111111";
	int length=0;

	while(binary_number[length]!='\0')
	{
		length++;
	}
	printf("%ld\n",bintodec(binary_number, length));
	return 0;
}//end main

/*---------------------------------------------------------------------------------------------------------------------------------*/
//fuction(s) declaration
//Solution_1:
long int bintodec(char *binary_number, int length)
{
	int result=0;
	int powof2=length-1;
	for(int i=0; i<length; i++)
	{
		if(binary_number[i]==49)
			result=result+pow(2,powof2);
		powof2--;
	}
	return result;
}//end bintodec

/*
//Solution_2:
unsigned long int bintodec(char *binary, int length)
{
    unsigned long long int result = 0;
    unsigned long long int binum = atof(binary);
    for(int i=0; i<length; i++)
	{
	    unsigned long long int mult = binum%10;
	    result = result + pow(2, i)*mult;
	    binum = (unsigned long long int) binum/10;
	}
	return result;
}//end bintodec
*/

/*
									**************************************************************
									* NOTE: This code has already been modified after submission *
									**************************************************************

Make a function that turns the string backwards. The address of the first element of array and length of a string are passed as a 
parameter to the function. Length of the string can be between 2-1000.
For example:

Test				| Result
---------------------------------------------
char text[]={"test text"};      | txet tset
int len=strlen(text);		|
reverse_order(text,len);  	|
for(int k=0;k<len;k++) 		|
    {				|
    	printf("%c",text[k]);	|
    }				|
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

//function prototype(s)
void reverse_order(char *text, int len);

/*---------------------------------------------------------------------------------------------------------------------------------*/
//main function
int main(void)
{
	char text[]={"esrever ni ydaerla saw txet l4n1g1r0 ehT"};
	int len=strlen(text);
	//original text
	printf("The original text was: ");
	for(int h=0; h<len; h++)
	{
		printf("%c",text[h]);
	}
	printf("\n");

	//reverse text
	printf("The text in reverse is: ");
	reverse_order(text, len);
	for(int k=0; k<len; k++)
	{
		printf("%c",text[k]);
	}
	printf("\n");
	return 0;
}//end main

/*---------------------------------------------------------------------------------------------------------------------------------*/
//fuction(s) declaration
void reverse_order(char *text, int len)
{
	char new_text[len-1];
	for(int i=0; i<len; i++)
	{
		new_text[i] = text[len-1-i];
	}
	for(int j=0; j<len; j++)
	{
		text[j] = new_text[j];
	}
}//end reverse_order





/*---------------------------------------------------------------------------------------------------------------------------------*/
/*-----------------------------------------------------TEACHER'S ANSWER------------------------------------------------------------*/
/*---------------------------------------------------------------------------------------------------------------------------------*/
/*
void reverse_order(char *incoming_array, int len)
{
char temp_array[len];

for(int i=0;i<len;i++)
        {
        temp_array[len-1-i]=*incoming_array;
        incoming_array++;
        }

incoming_array=incoming_array-len;

for(int k=0;k<len;k++)
        {
        *incoming_array=temp_array[k];
        incoming_array++;
        }
}
*/

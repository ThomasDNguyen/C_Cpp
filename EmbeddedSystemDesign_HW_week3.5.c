/*
Make a function that calculates and prints Class C subnet. Subnet can be checked with this calculator: http://www.subnet-calculator.com/
For example:

Test				| Result
---------------------------------------------------------------------------------------
int class_C=128;		| Subnet mask 255.255.255.128
calculate_subnets(class_C); 	| Network ID range 0 - 127	
				| Network ID range 128 - 255
				| The number of subnets: 2
				| IP addresses are divisible by number: 128
				| The number of useable IP addresses in one subnet: 126
				| The Total number of IP addresses: 252
---------------------------------------------------------------------------------------
int class_C=192;		| Subnet mask 255.255.255.192
calculate_subnets(class_C); 	| Network ID range 0 - 63
				| Network ID range 64 - 127
				| Network ID range 128 - 191
				| Network ID range 192 - 255
				| The number of subnets: 4
				| IP addresses are divisible by number: 64
				| The number of useable IP addresses in one subnet: 62
				| The Total number of IP addresses: 248
-----------------------------------------------------------------------------------
int class_C=224;		| Subnet mask 255.255.255.224
calculate_subnets(class_C); 	| Network ID range 0 - 31
				| Network ID range 32 - 63
				| Network ID range 64 - 95
				| Network ID range 96 - 127
				| Network ID range 128 - 159
				| Network ID range 160 - 191
				| Network ID range 192 - 223
				| Network ID range 224 - 255
				| The number of subnets: 8
				| IP addresses are divisible by number: 32
				| The number of useable IP addresses in one subnet: 30
				| The Total number of IP addresses: 240
*/

#include <stdio.h> 
#include <math.h>

//function prototype(s)
void calculate_subnets(int class_C);

/*---------------------------------------------------------------------------------------------------------------------------------*/
//main function
int main(void)
{
	int class_C=192;
	calculate_subnets(class_C);
	return 0;
}//end main

/*---------------------------------------------------------------------------------------------------------------------------------*/
//fuction(s) declaration
void calculate_subnets(int class_C)
{
  	//var declare
	int divNum = 256 - class_C;
    int subNum = 256/divNum;
	int addrPerSub = divNum - 2;
	int totalAddr = addrPerSub*subNum;

  	//print values
	printf("Subnet mask 255.255.255.%d\n", class_C);
	for(int i=0; i<subNum; i++)
		printf("Network ID range %d - %d\n", divNum*i, divNum*(i+1) - 1);
	printf("The number of subnets: %d\n", subNum);
	printf("IP addresses are divisible by number: %d\n", divNum);
	printf("The number of useable IP addresses in one subnet: %d\n", addrPerSub);
	printf("The Total number of IP addresses: %d\n", totalAddr);
}//end calculate_subnets





/*---------------------------------------------------------------------------------------------------------------------------------*/
/*-----------------------------------------------------TEACHER'S ANSWER------------------------------------------------------------*/
/*---------------------------------------------------------------------------------------------------------------------------------*/
/*
void calculate_subnets(unsigned char class_C)
{
    int i=0;
    unsigned char mask=0;
    mask=class_C;
    unsigned char tempmask=0x01;
    int modulo=0;
    int ipaddresscount=0;
    modulo=256-mask;
    ipaddresscount=modulo;
    float subnetcount=0;
    int k=0;
    int i_old=0;
    
    for(k=0;k<8;k++)
    {
       if(mask&tempmask)
       {
        subnetcount=8-k;
        break;
       }
       tempmask=tempmask<<1;
    }
    subnetcount=pow(2,subnetcount);
    
    printf("Subnet mask 255.255.255.%d\n",mask);
    for(i=0;i<=256;i++)
    {
        if(i%modulo==0)
        {
            if(i!=i_old)
            printf("Network ID range %d - %d\n",i_old,i-1);
            i_old=i;
        }
    }
    
    printf("The number of subnets: %.0f \n",subnetcount);
    printf("IP addresses are divisible by number: %d \n",ipaddresscount);
    printf("The number of useable IP addresses in one subnet: %d \n",ipaddresscount-2);
    printf("The Total number of IP addresses: %.0f\n",subnetcount*(ipaddresscount-2));
}
*/

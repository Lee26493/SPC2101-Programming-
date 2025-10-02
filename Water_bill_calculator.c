/*
Name: Lee Kariuki 
Registration no: CT101/G/26493/25
Description: program to verify the qualification of a user for a loan 
*/
#include<stdio.h> //scanf(""),printf("")
//main function 
int main()
{
	int units;
	float bill;
	
	printf("Enter water units consumedunits:\t");
	scanf("%d",& units);
	
	if(units >=0&& units<=30)bill=units*20;
	else if(units>=31&&units<=60)bill=units*25;
	else if(units>60)bill=units*30;	
	
	printf("\nWater units consumed: %d\n", units);	
	printf("Total water bill %.2f KES\n", bill);
		return 0;
}
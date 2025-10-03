/*
Name: Lee Kariuki 
Registration no: CT101/G/26493/25
Description: program to verify the qualification of a user for a loan 
*/
#include<stdio.h> //scanf(""),printf("")
//main function 
int main(){
    float age, income;//variable declaration
	
    printf("Enter your age:\n");// prompts user to input their age
    scanf("%f", &age);
    if(age >=21)
	{printf("Enter your annual income:\n");//prompts user to input their annual income
    scanf("%f", &income);
    //input validation
    if(income >=21000){
    printf("Congratulations you are qualified for a loan");}
    else{
    printf("Unfortunately, we are unable to offer you a loan at this time");}
		
	} 
    else
	{
	printf("You do not meet the age requirement");	
	}
    return 0; // complete execution
    }

/*
Name: Lee Kariuki 
Registration no: CT101/G/26493/25
Description: Program to prompt user to enter password until it is correct
*/
#include <stdio.h>//printf(""), scanf("")
#include <string.h>//strcmp()
int main(){//main function 
	char password[10];//declar a string 
	do {// starts do-while loop
	printf("Enter password: ");// user prompted to enter password 
	scanf("%s", password);}
	while (strcmp(password, "1234")!= 0);//to compare the declared number with the inputed number 
	printf("Access Granted\n");//result when clean
return 0;}
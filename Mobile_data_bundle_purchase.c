/*
Name: Lee Kariuki 
Registration no: CT101/G/26493/25
Description: Program to prompt a user to purchase a bundle
*/
#include<stdio.h>//scanf(""),printf("")
//main function
int main(){ 
int choice; 
printf("1. 100MB @KES.50\n");
printf("2. 500MB @KES.200\n");
printf("3. 1GB  @KES.350\n");
printf("4. 2GB  @KES.600\n");
//choices displayed to user
printf(" Enter your choice (1-4): \n");// user is prompted to choose
scanf("%d",& choice);
switch (choice)
	{// choices displayed after user selection
	case 1:
		printf("You selected 100MB @KES.50\n");
		break;
	case 2:
		printf("You selected 500MB @KES.200\n");
		break;
	case 3:
		printf("You selected 1GB @KES.350\n");
		break;
	case 4:
		printf("You selected 2GB @KES.600");
		break;
	
	default: 
		printf("Invalid choice");
	}
return 0;
} 
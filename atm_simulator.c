/*
Name: Lee Kariuki 
Registration no: CT101/G/26493/25
Description: Program to simulate withdrawal of money at an ATM
*/
#include <stdio.h>
int main(){
float balance = 20000.0, withdraw; //balance in account 
	  while (balance >0){
	  printf("Enter amount to withdraw: "); //sure is prompted to enter amount they wish to withdraw 
	  scanf("%f", &withdraw);
	  balance -= withdraw;//formula to calculate balance 
	  printf("Remaining balance: %.2f\n", balance);}//balance is displayed 
	  printf("Insufficient balance. Transaction stopped.\n");//transaction is stopped after balance is below 0 
return 0; }
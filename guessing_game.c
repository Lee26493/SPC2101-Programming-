/*
Name: Lee Kariuki 
Registration no: CT101/G/26493/25
Description: Program to generate rondom numbers similar to a guessing game
*/
#include <stdio.h>//printf(),scanf()
#include <stdlib.h>//rand()
#include <time.h>//time()
	int main(){
	int secret, guess, attempts = 0;
	srand(time(0));// for time retrieval from calendar 
	secret = rand() % 20 + 1;//random number between 1 and 20
	while (1){
	printf("Enter your guess (1-20): ");//user prompted to enter a guess 
	scanf("%d", &guess);
	attempts++;//allows attempts
	if (guess > secret)//when guess is above the secret number 
	printf("Too high!\n");
	else if (guess < secret)//when guess is below the secret number 
	printf("Too low!\n");
	else {//when guess is correct 
	printf("Congratulations! You guessed it in %d attempts.\n", attempts);
	break; } }
return 0; }
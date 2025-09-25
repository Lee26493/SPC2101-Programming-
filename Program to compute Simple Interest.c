/*
Name: Lee Kariuki 
Registration no: CT101/G/26493/25
Description: Program to compute Simple Interest
S_I=P*rate/100*time 
*/
#include<stdio.h> //scanf(""),printf("")
//main function 
int main(){
    //variable declaration 
    float principle, rate, time, interest;
    
    //prompt the user to enter amount 
    printf("Enter Principle amount: ");
    scanf("%f", &principle);
    
    printf("\n Enter rate: ");
    scanf("%f", &rate);
    
    printf("\n Enter time: ");
    scanf("%f", &time);
    
    //compute interest
    interest = principle*rate/100*time;
    
    //display interest
    printf("\n Simple Interest is Ksh. %.2f", interest);
    
    return 0; // complete execution 
    }
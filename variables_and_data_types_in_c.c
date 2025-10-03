/*
Name: Lee Kariuki 
Registration no: CT101/G/26493/25
Description: Variables and Data types in c
*/
#include<stdio.h> //scanf(""),printf("")
//main function 
int main(){
    //variable deceleration and initialization 
    char a; //%c
    char name[]={}; //%s
    int age; //%d
    float salary; //%f
    double budget; //%lf
    
    //Promoting the user to enter values of each variable 
    printf("Please enter the values of age: ");
    scanf("%d", &age);
    
    printf("Enter your name: ");
    scanf("%s", &name);
    
    printf("Enter the value of salary: ");
    scanf("%f", &salary);
    
    printf("Enter the value of budget: ");
    scanf("%lf", &budget);
    
    printf("Enter the value of character: ");
    scanf(" %c", &a); //Added a space before %c to consume any Leftover whitespace
    //Print the output to the user screen 
    printf("The value of age is %d \n", age);
    printf("Your name is %s \n", name);
    printf("The value of salary is %10.2f \n", salary);
    printf("The value of budget is %.21f \n", budget);
    printf("The value of character is %c \n", a);
    
    return 0; //execution successful 
    }

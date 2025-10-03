/*
Name: Lee Kariuki 
Registration no: CT101/G/26493/25
Description: Variables and Data types  
*/
#include<stdio.h> //scanf(""),printf("")
//main function 
int main(){
    //variable deceleration and initialization 
    char a = 'k'; //%c
    char name[] = {"Agnes"}; //%s, Array
    int age = 10; //%f
    float pi = 3.142; //%f
    double profit = 10000.10; //%lf
    
    printf("The character is %c \n", a);
    printf("The name (string) is %s \n", name);
    printf("Age is: %d \n", age);
    printf("The value of pi is %f", pi);
    printf("The profit is %f", profit);
    return 0; //execution successful 
    }

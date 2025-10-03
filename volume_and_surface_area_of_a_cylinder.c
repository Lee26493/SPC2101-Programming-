/*
Name: Lee Kariuki 
Registration no: CT101/G/26493/25
Description: Program to compute volume and surface area of a cylinder 
volume=pi*r²*h
surface area=2*pi*r²+2*pi*r*h
*/
#include<stdio.h> //scanf(""),printf("")
//main function 
int main(){
    //variable declaration 
    float radius, height, volume, area;
    const double pi=3.142;
    
    //prompt the user to enter amount 
    printf("Enter radius in cm: ");
    scanf("%f", &radius);
    
    printf("Enter height in cm: ");
    scanf("%f", &height);
    
    //compute volume and surface area 
    volume = pi*radius*radius*height;
    area = 2*pi*radius*radius+2*pi*radius*height;
    
    //display volume and surface area 
    printf("\nVolume is %fcm³", volume);
    printf("\nSurface area is %fcm²", area);
    
    return 0; // complete execution ⁰0w
    }

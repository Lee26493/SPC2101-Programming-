/*
Name: Lee Kariuki 
Registration no: CT101/G/26493/25
Description: 1D array
*/
#include<stdio.h>
int main()//main function
{
    int i;
    int sum=0;
    int scores[4]=
    {10,20,30,40};
    for(i=0;i<4;i++){
    printf(" %d\n ",scores[i]);
    sum=sum+scores[i];}
    {printf("The sum is %d", sum);}
    return 0;
}
    
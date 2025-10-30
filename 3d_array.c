/*
Name: Lee Kariuki 
Registration no: CT101/G/26493/25
Description: 3d array
*/
#include<stdio.h>
int main(){
    int i,j,k;
    int sum=0;
    int scores[2][2][3]={
    {
    {10,20,30},
    {40,50,60}
    },
    {
    {70,80,90},
    {100,110,120}
    }
    };
    for(i=0;i<2;i++){
    for(j=0;j<2;j++){
    for(k=0;k<3;k++){
    printf("%d ",scores[i][j][k]);
    sum=sum+scores[i][j][k];}
    printf("\n");}
    printf("\n");}
    printf("The sum is %d", sum);
    return 0;
    }
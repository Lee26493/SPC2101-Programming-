/*
Name: Lee Kariuki 
Registration no: CT101/G/26493/25
Description: Program to validate the eligibility of a student to sit for the final exam
*/
#include<stdio.h> //scanf(""),printf("")
//main function 
int main(){
  //variable declaration
int attendance,average_marks,attendance_percentage;

printf("enter the number of attended sessions:\t");//prompt user to input no. of sessions attended
scanf("%d",&attendance);

if(attendance >14 && attendance <0){
printf("invalid, must lie between 0-10\n");
return 0;// result if input is invalid
}
printf("enter average marks:\t");// prompt user to input their average marks
scanf("%d",&average_marks);

attendance_percentage=(attendance * 100 )/14; // formula to calculate attendance percentage

printf("attendance percentage is %d%%\n",attendance_percentage);
printf("average marks is %d%%\n",average_marks);

if(attendance_percentage>=75 && average_marks>=40){
printf("You are eligible");// result if eligible
}else{
printf("Not eligible");}// result if not eligible

return 1;//program executed successfully
}
	
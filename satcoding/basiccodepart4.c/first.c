/* Write a C program to calculate the Compound Interest for a given principal amount, rate of 
interest, and time period.
The formula for calculating Compound Interest is:
--------------------------------------------------
*/
#include<stdio.h>
#include<math.h>
int main (){
float rate, pri,time,ci;
printf("enter tha rate  pri and time");
scanf("%f%f%f",&rate,&pri,&time);
ci = pri*(pow( (1+rate/100 ),time));
printf("%f",ci);
return 0;

}
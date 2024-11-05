/*-------------------------------------------------
Develop a C program that accepts an hour (in 24-hour format) as input and 
classifies the time of day as "Morning," "Afternoon," "Evening," or "Night." 
Implement this using a series of if statements. The program should also validate 
the input and display an error message if the entered hour is outside the valid 
range (0-23).
Enter the hour (24-hour format): 13
Sample Output :-
----------------
It's Afternoon.
*/
#include<stdio.h>
int main(){
    int hour;
     printf("Enter tha hour");
     scanf("%d",&hour);
    if( hour >0  && hour<24){
        if(hour>=4 && hour<12)printf("GOOD morning");
        if(hour>=12 && hour <= 15)printf("Good afternoon");
        if(hour>15 && hour <=19)printf("Good evening");
        if(hour >=20 && hour<24 || hour < 4)printf(" good night");
    }
    else printf("Outside valid range");
    return 0;
}
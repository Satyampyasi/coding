/*Program-5 :- [ok]
-----------------
You are developing a program for an online bus ticket booking platform called "BusTicketBooker."

The platform offers tickets at a fixed price of Rs. 300 per seat. However, there are discounts available for senior citizens:

If a passenger’s age is between 60 and 100 (inclusive), they receive a 20% discount on the total booking cost.
Write a C program for "BusTicketBooker" that takes the number of tickets and the age of the passenger as inputs and calculates the total booking cost after applying any applicable discount using the ternary operator.
The program should then display the bill with a suitable message, showing the total cost before discount, the discount amount (if applicable), and the total cost after discount.

Your task is to implement the program logic inside the main function using only the ternary operator.
*/
#include<stdio.h>
int main(){
   int age,tic;
   printf("entr tha age");
   scanf("%d",&age);
   printf("enter no of ticket");
   scanf("%d",&tic);
   int dis= (tic*300)-(tic*300/5);
   (age>60)
   ?printf("get discount rs %d\n Tottal %d",(tic*300/5),dis)
   :printf("not get discount  total rs %d ",tic*300);
   return 0;
}
/* You are developing a program for an online bus ticket 
booking platform called "BusTicketBooker."

The platform offers tickets at a fixed price of Rs. 300 per seat. 

However, there are discounts available for senior citizens:

If a passenger’s age is between 60 and 100 (inclusive), they receive a 20% discount on the 
total booking cost.
Write a C program for "BusTicketBooker" that takes the number of tickets and the age of the passenger
 as inputs and calculates the total booking cost after applying any applicable discount using 
 the ternary operator.
The program should then display the bill with a suitable message, showing the total cost before
 discount, the discount amount (if applicable), and the total cost after discount.

Your task is to implement the program logic inside the main function using only the ternary operator.

Examples:
---------
-> Passenger is not a senior citizen

Sample Input:
Number of tickets: 3
Age of the passenger: 45
Sample Output:
Total cost before discount: Rs. 900.00
Discount amount: Rs. 0.00
Total cost after discount: Rs. 900.00

-> Passenger is a senior citizen

Sample Input:
Number of tickets: 2
Age of the passenger: 65
Sample Output:
Total cost before discount: Rs. 600.00
Discount amount: Rs. 120.00
Total cost after discount: Rs. 480.00
*/
#include<stdio.h>
int main(){
    int age,tic,d,a;
    printf("enter tha age ");
    scanf("%d",&age);
    printf("enter tha ticket ");
    scanf("%d",&tic);
    d=(tic*300/5);
    a = (tic*300)-d;
    (age>=60 && age<100)? printf("Tottal cost brfore dis %d\nDiscount amount %d\nTottal cost %d ",tic*300,d,a)
    :printf(" you dont get any discount tottal cost %d",tic*300);
    return 0;

}
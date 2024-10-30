/*Write a C program that takes an integer as input and checks whether 
it is positive, negative, or zero. Display an appropriate message as output
 without using the ternary operator.
Sample-run:
------------
i). 
---
Sample Input:
Enter an integer: 15

Sample Output:
The number is positive.
*/
#include<stdio.h>
int main(){
    int num;
    printf("enter tha number ");
    scanf("%d",&num);
    (num>0)?printf("this is positive"):(num<0)?printf("this is negative")
    :printf("it is zero");
    return 0;


}
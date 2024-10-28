/*Write a C program to check whether a given number is even or odd without using if-else or ternary operator ?

Sample-Input :-
---------------
Enter a number -> 39

Sample-output :-
----------------
The number 39 is odd number.*/
#include<stdio.h>
int main(){
    int num;
    printf("enter tha number :");
    scanf("%d",&num);
    (num%2==0) && printf("%d is even ",num) || printf(" %d is odd ",num);
    return 0;

}

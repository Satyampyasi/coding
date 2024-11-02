/*Write a C program to find the largest number among three numbers using the 
ternary operator. Take input values using the scanf() function."*/
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter tha number");
    scanf("%d%d%d",&a,&b,&c);
      printf("%d is big ",(a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c));
      
      return 0;

}
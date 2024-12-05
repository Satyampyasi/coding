/*Write a C program to input the lengths of all sides of a triangle and check 
whether the triangle is valid.
*/
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the side of triangle");
    scanf("%d%d%d",&a,&b,&c);
    if( a+b >c && a+c>b  && c+b>a)printf("This is valid triangle");
    else printf("Not valid triangler");
    return 0;
}

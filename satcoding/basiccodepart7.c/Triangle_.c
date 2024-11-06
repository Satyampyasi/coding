/*rite a C program to check whether a triangle is equilateral, isosceles, or 
scalene.
If all three sides are equal, the triangle is equilateral.
-> If exactly two sides are equal, the triangle is isosceles.
-> If all sides are different, the triangle is scalene.
    Side 1: 3
    Side 2: 3
    Side 3: 3
    The triangle is equilateral.
*/
#include<stdio.h>
int main(){
    int a,b,c;
    printf(" Enter the three side of triangle:-");
    scanf("%d%d%d",&a,&b,&c);
     if( a+b >c && a+c>b  && c+b>a)
    {
    if( b==a && b==c)puts(" Equilateral Triangle");
    else if( a==b||b==c||c==a) puts(" Isosceles Triangle");
    else puts(" Triangle is scalene");
    }
    else puts(" can't form triangle");
    return 0;
    }
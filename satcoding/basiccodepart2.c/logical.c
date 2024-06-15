#include<stdio.h>
int main()
{
    int a=5,b=5,c=10, result;
    result= (a==b)&&(a<c);
    printf( "And operator work %d\n",result);
    result= (a==b)||(a>b);
    printf(" Or operator work %d\n",result);
    result= !(a==b);
    printf("not operator work %d",result);
    result = 0;
}

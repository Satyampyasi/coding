#include<stdio.h>
int main()
{
    int a ,b ,t;
    printf("enter tha value of A :");
    scanf("%d",&a);
    printf("enter tha value of B :");
    scanf("%d",&b);
    t=a;
    a=b;
    b=t;
    printf("change value of A %d",a);
    printf("chnage value of b is %d",b);
    return 0;
}
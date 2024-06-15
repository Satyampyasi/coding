#include<stdio.h>
int main()
{
    int num1 ,num2;
    printf("enter tha value of number one an d number two ");
    scanf(" %d%d",&num1,&num2);
     // when num1 =num1
     if(num1==num2){
        printf(" num1 and num2 is equal %d %d",num1,num2);
     }
     else if (num1>num2){
        printf("num1 is greater %d",num1);
     }
     else {
        printf("num2 is greater %d",num2);
     }
return 0;
}
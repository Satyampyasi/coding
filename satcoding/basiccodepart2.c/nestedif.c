#include<stdio.h>
int main()
{
    int num;
    printf("Enter your num:");
    scanf("%d",&num);
    if( num>0){
        if (num%2==0){
        printf("This is a even number");
        }
        else {
            printf("THis is a odd number");
        }
    }
      else {
        printf("this is a negative number ");
      }
      return 0;
}
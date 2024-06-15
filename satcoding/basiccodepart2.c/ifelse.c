#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if (age>18){
        printf("you can vote\n ");
    }
    else{
        printf("you are not aligible\n");
    }
return 0;
}
#include<stdio.h>
int main(){
    int num;
    printf("Enter tha number ");
    scanf("%d",&num);
    if(num==0)printf("This is a zero");
    else if(num>0) printf("This is a positive number ");
    else printf("This is negative number");
    return 0;
}
#include<stdio.h>
int main(){
    int year;
    printf("enter tha year");
    scanf("%d",&year);
    if(year%4==0 &&  year%100!=0|| year%400==0)puts("leap year ");
    else puts("comman year");
    return 0;

}
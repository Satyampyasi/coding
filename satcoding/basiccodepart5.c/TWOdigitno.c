#include<stdio.h>
int main(){
    int num;
    printf("Enter tha number:");
    scanf("%d",&num);
    if(num>9 && num<100)puts("two digits");
    else puts("not a two digit no");
    return 0;
}
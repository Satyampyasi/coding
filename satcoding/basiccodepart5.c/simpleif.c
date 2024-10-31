#include<stdio.h>
int main(){
    int num;
    printf("enter tha number:");
    scanf("%d",&num);
    printf("ABSOLUT VALUE  %d\n", abs(num));
    if(num<0) num = -num;
    printf("ABSOLUT VALUE  %d",num);

    return 0;
}
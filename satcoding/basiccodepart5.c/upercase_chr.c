#include<stdio.h>
int main(){
    char ch;
    printf("enter tha character");
    scanf("%c",&ch);
    if(ch>='A'&& ch<=90)puts("uper case character");
    else puts("not a uper case");
    return 0;

}
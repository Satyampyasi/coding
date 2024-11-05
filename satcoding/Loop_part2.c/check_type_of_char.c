#include<stdio.h>
int main(){
    char ch;
    printf("Enter th character ");
    scanf("%c",&ch);
    if( ch >='a'&& ch <='z') puts("this is lowercase alphabte");
    else if(ch>='A'&& ch<='Z')puts(" Uper case alphabte");
    else if(ch>='0'&& ch<='9')puts("This is numbers");
    else puts(" special character");
    return 0;
}
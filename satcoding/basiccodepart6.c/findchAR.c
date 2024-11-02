#include<stdio.h>
int main()
{
    char ch;
    printf("enter tha char value ");
    scanf("%c",&ch);
    if( ch >'a'&& ch<'z' )puts(" lower case");
    else if( ch >'A' && ch< 'Z')puts("uper case");
    else if( ch >'0' && ch<'9') puts(" numbers ");
    else if( ch==' ') puts(" space bar");
    else puts(" special character ");
    return 0;
}
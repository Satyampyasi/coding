#include<stdio.h>
int main(){
    char ch;
    printf("Enter tha value ");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z'|| ch>='A'&& ch<'Z') printf("ALPHABATE character");
     else  printf("Other than alphabte");
    return 0;
}
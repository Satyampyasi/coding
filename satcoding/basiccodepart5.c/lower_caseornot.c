#include<stdio.h>
int main(){
    char ch;
    printf("Enter character:");
    scanf("%c",&ch);
    if(ch>'a'&& ch<'z')puts("Lowercase");
    if(!(ch>'a'&& ch<'z'))puts(" Not a Lowercase");
    /* (ch <'a'||ch> 'z') */
    return 0;
}
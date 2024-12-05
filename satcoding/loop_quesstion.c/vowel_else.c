#include<stdio.h>
int main(){
    char ch;
    printf("enter tha charatcter ");
    scanf("%c",&ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
    {
        if (ch == 'a' || ch == 'i' || ch == 'e' || ch == 'o' || ch == 'u' ||
              ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("vowel");
              }
              else{
                printf("consonalt");
              }
    }
    else {
       printf("not a alphabate");
    }
}

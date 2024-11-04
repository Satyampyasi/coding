/*Write a C program to input any alphabet and check whether it is 
vowel or consonant using simple(if) only.
Sample input  : char ch = 'A';
Sample output : Vowel

Sample input  : char ch = 'b';
Sample output : Consonant

*/
#include<stdio.h>
int main(){
    char ch;
    printf(" Enter the character ");
    scanf("%c",&ch);
    if (ch =='a'||ch=='i'||ch=='e'||ch=='o'||ch=='u' 
      ||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') 
    {
        printf("Vowel");
    }
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
        if (!(ch == 'a' || ch == 'i' || ch == 'e' || ch == 'o' || ch == 'u' ||
              ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) 
    {
    printf("Consonant");
    }
     return 0; 
}

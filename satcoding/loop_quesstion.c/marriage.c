#include<stdio.h>
int main(){
    int age;
    char gen;
    printf(" enter tha gender");
    scanf("%c",&gen);
    printf("Enter tha age");
    scanf("%d",&age);
    if ( gen =='m'||gen =='M'||gen == 'f'||gen=='F')
    {
                if(age >=21 || (gen == 'f'|| gen =='F') &&  age>=18)
            {
               printf(" elegible for marriage"); 
            }
               else  printf(" not elegible");
    }
     else printf("invalid gender");
}
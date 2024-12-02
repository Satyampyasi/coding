#include<stdio.h>
int main(){
    int nr,nc,r,c;
    char ch='A';
    printf("Enter tha row and columns");
    scanf("%d %d",&nr,&nc);
    for(r=1;r<=nr;r++){
    for(c=1;c<=nc;c++){
     if(r%2==0)printf("%2c",--ch);else printf("%2c",ch++);
    }
    printf("\n");
    }  
return 0;
}
#include<stdio.h>
int main(){
    int r,c;
    printf("Enter tha row number and column");
    scanf("%d%d",&r,&c);
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
        if(i==1||j==1||i==r||j==c)printf("*");
        else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
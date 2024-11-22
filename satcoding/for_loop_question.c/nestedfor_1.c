#include<stdio.h>
int main(){
    int t;
    printf("Enter tha nukber of table you want to be print");
    scanf("%d",&t);
    for(int i=1;i<=10;i++) 
    {
       for(int j=1;j<=t;j++){
        printf("%d*%d=%d",i,j,i*j);
        printf("\n");
       }
       printf("\n");
    }

    return 0;
}
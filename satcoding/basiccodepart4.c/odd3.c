#include<stdio.h>
int main(){
    int num;
    printf("Enter tha number ");
    scanf("%d",&num);
    if((num&1)==0)
    {
        printf("even number ");
    }
     else{
        printf("odd number");
     }
     return 0;
}
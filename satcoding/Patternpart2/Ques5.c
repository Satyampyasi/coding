#include<stdio.h>
int main(){
    int n=5;
    int a=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=a-1;j++){
            printf(" ");
        }
        a--;
        for(int k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
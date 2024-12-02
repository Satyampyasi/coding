#include<stdio.h>
int main(){
    int n=4,a; 
    a=n;
    for(int i=1;i<=n;i++){
        for( int j=1;j<=a;j++){
            printf("*");
        }
        printf("\n");
        a--;
    }
    return 0;
}
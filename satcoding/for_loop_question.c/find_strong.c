#include<stdio.h>
int main(){
    
    int n=145,sum=0;
    int m=n;
    while(n!=0){
        int r = n%10;
        int f = 1;
        for(int i=1;i<=r;i++)
            {
             f=f*i;
             }
         sum = sum + f;
         n=n/10;
    }
    (m==sum)?printf("Strong number"):printf("not a strong number");
    return 0;
     
}
#include<stdio.h>
int main(){
    int n,b,f,c=0;
    printf("enter  tha n");
    scanf("%d",&n);
    for(int i=2; i<=n;i++)
       {
             for(b=1,f=0;b<=i;b++)
            {
            if(i%b==0)f++;
            }
        if(f==2) printf("%d",i,c++);
        }
    printf("\n%d primes",c);
    return 0;

}
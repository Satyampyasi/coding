/* */
#include<stdio.h>
int main  (){
long n=5677,sum=0;
while(n>9){
    for(sum=0;n!=0;n=n/10){
        sum=sum+n%10;
    }
    n=sum;
}
printf("generic root=%ld",sum);
return 0;
}
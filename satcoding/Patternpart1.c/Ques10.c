#include<stdio.h>
int main(){
    int n=5;
   for(int i=1;i<=n;i++){
     for(int j=1;j<=i;j++){
   if(i%2==0) printf("%c",64+j); 
   else printf("%d",j);
     }
     printf("\n");

   }
   return 0;
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter tha size of n: ");
    scanf("%d",&n);
   int  arr[n];
   int sum=0;
   for(int i=0;i<=n-1;i++){
      printf("Enter at index %d: ",i);
      scanf("%d",&arr[i]);
      sum=sum+arr[i];
   }
   printf("Tha sum of all element in array is: %d",sum);
   return 0;
}
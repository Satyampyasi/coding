#include<stdio.h>
int main(){
    int n;
    printf("Enter tha size of array");
    scanf("%d",&n);
    if( n <= 0)
     {
     printf("No elements in the array.");
     return 0;
    }

   int arr[n];
   printf("Enter tha element of array");
   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }
   
   for(int i=0;i<n;i++){
    int count=0;
    for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]) count++;
    }
    if(count%2!=0) printf("%d,",i);
   }
   return 0;
}
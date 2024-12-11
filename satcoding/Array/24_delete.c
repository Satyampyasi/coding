#include<stdio.h>
int main(){
    int  n,loc;

    printf("Enter tha no of elements in the array:");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
    printf(" Enter tha element at index%d: ",i);
    scanf("%d",&arr[i]);
         }
   printf("Enter tha del loction");
   scanf("%d",&loc);
   
   for(int i=loc-1;i<n-1;i++){
    arr[i]=arr[i+1];
   }
    for(int j=0;j<n-1;j++){
     printf("%d ",arr[j]);
     }
return 0;
}
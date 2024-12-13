#include<stdio.h>
int main(){
    int n,arr_sum=0,a=1,new_size=0,i,j;
    printf("Enter tha size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
    printf("enter tha element: ");
    scanf("%d",&arr[i]);
    } 
    for( i=n-1;i>=0;i--){
      arr_sum = arr_sum+(arr[i])*a;
      a=a*10;
         } 
        arr_sum++;
       int temp = arr_sum;
       for(;temp!=0;new_size++){
        temp = temp/10;
       }
       for( i = new_size-1; i>=0; i--){
        arr[i] = arr_sum%10;
        arr_sum = arr_sum/10;
       }
       
       printf("[");
       for( i=0;i<new_size;i++){
        printf("%d ,",arr[i]);
       }
       printf("\b]");
    return 0;
}
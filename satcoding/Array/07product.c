#include<stdio.h>
int main(){
     int n;
     printf("Enter tha size of array:");
     scanf("%d",&n);
       int arr[n];
    for(int i=0;i<n;i++){
      printf("Enter array at index %d: ",i);
      scanf("%d",&arr[i]);
    }
    int pro=1;
    for(int i=0;i<n;i++)
    {
      pro=pro*arr[i];
    }
    printf("%d",pro);
    return 0;
}
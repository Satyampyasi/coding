#include<stdio.h>
int main(){
    int n;
    printf("Enter tha size of array");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        printf("Enter tha array element ");
        scanf("%d",&arr[i]);
        }
        int max=arr[0];
        int min=arr[0];
     for(int i=0;i<=n-1;i++){
        if(arr[i]>max) max = arr[i];
        if(arr[i]<min) min = arr[i];
     }
     printf("max is %d\n",max);
     printf("min is %d",min);
     return 0;
}
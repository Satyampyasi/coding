#include<stdio.h>
int main(){
int n;
printf("Enter tha size of array");
scanf("%d",&n);
int arr[n];
for(int i=0;i<=n-1;i++){
    printf("Enter at index %d: ",i);
    scanf("%d",&arr[i]);
}
for(int j=0;j<=n-1;j++){
    
    printf("Element at index %d   %d",j,arr[j]);
    printf("\n");
}
return 0;
}
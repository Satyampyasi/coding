#include<stdio.h>
int main(){
int n,m;
printf("Enter tha size of 1st array:");
scanf("%d",&n);
int arr[n];
printf("Enter tha Element of array");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("Enter tha size of 1st array:");
scanf("%d",&m);
int brr[m];
for(int i=0;i<m;i++){
    scanf("%d",&arr[i]);
}
 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(arr[i]==brr[i]){
        printf("%d",arr[i]);
      }
    }
 }
return 0;

}

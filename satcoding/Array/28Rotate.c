#include<stdio.h>
int main(){
     int  n,i,temp,position;

    printf("Enter tha no of elements in the array:");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
    printf(" Enter tha element at index%d: ",i);
    scanf("%d",&arr[i]); }
    printf("Enter tha position to rotate");
    scanf("%d",&position);
    for(int j=0;j<position;j++){
        temp=arr[0];
       for( i=0;i<n-1;i++){
          arr[i]=arr[i+1]; 
    }
    arr[i] = temp;
    }
    for(int i=0;i<n;i++){
        printf("  %d",arr[i]);
    }
    return 0;
}
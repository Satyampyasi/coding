#include<stdio.h>
int main(){
     int  n,i;

    printf("Enter tha no of elements in the array:");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
    printf(" Enter tha element");scanf("%d",&arr[i]); 
    
    }
    for( i=1;i<n+1;i++){
    int flag=0;
    for(int j=0;j<n;j++){
       if(i==arr[j]) flag=1;
    }
    if(flag==0)printf("%d ",i);
       
    }
    return 0;
    }
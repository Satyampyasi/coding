#include<stdio.h>
int main(){
 int  n,count;

    printf("Enter tha no of elements in the array:");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
    printf(" Enter tha element at index%d: ",i);
    scanf("%d",&arr[i]);}
    for(int i=0;i<n;i++,count=0){
        for(int j=0;j<n;j++){
           if(arr[j]==arr[i])count++;
        }
        if(count==1)printf("%d",arr[i]);
    }
     return 0;                   
}
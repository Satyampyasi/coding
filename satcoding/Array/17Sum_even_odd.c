#include<stdio.h>
int main(){
    int n;
    printf("Enter tha n value");
    scanf("%d",&n);
    int arr[n];
    int evensum=0;
    int oddsum=0;
    for(int i=0;i<=n-1;i++){
        printf("Element at index %d: ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++){
        if(arr[i]%2==0){
        evensum=evensum+arr[i];
        printf("\n");
        }
    }
    for(int i=0;i<=n-1;i++){
        if(arr[i]%2!=0)
        oddsum=oddsum+arr[i];
    }
    printf("even sum=%d\nodd sum is %d",evensum,oddsum);
    return 0;

}
#include<stdio.h>
int main(){
    int n,m,loc;
    printf("Enter tha no of elements in the array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf(" Enter tha element at index%d: ",i);
        scanf("%d",&arr[i]);
         }
          printf("Enter tha element to insert:");
          scanf("%d",&m);
          printf("Enter tha index be inserted:");
          scanf("%d",&loc);
    for(int i=n-1;i>=loc;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[loc]=m;
    for(int i=0;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
}
#include<stdio.h>
int main(){
    int n;
    printf("Enter array size");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n-1;i++){
        printf("ELment at index %d: ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=n-1;i>=0;i--){
        printf(" The reverse is %d\n",arr[i]);
    }
    return 0;
}

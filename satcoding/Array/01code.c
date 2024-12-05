#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<=4;i++){
        int a=1+i;
        printf("Enter element no %d==",a);
        scanf("%d",&arr[i]);
    }
    printf("3rd element value %d",arr[2]);
}
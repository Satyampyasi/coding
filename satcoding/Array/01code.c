#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<=4;i++){
        printf("Enter element index  %d==",i);
        scanf("%d",&arr[i]);
    }
    printf("3rd element value %d",arr[2]);
}
#include<stdio.h>
int main(){
    int count=0;
    int x;
    int arr[10]={4,5,2,3,6,9,7,15,12,1};
    printf("Enter tha value of x;");
    scanf("%d",&x);
    for(int i=0;i<=9;i++){
        if(arr[i]>x) count=count+1;
    }
    printf("%d",count);
    return 0;
}
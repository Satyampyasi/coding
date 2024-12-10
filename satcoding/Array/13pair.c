#include<stdio.h>
int main(){ 
    int x = 12;
    int arr[8]={1,2,3,4,5,6,7,8};
    int count = 0;
    for(int i=0;i<=7;i++){
        for(int j=0;j<=7;j++)
        {
            if(arr[i]+arr[j]==x) count=count+1;
        } 
    }
    printf("%d",count/2);
}
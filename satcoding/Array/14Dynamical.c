#include<stdio.h>
int main(){
    int arr[10];
    for(int i=0;i<=9;i++){
        printf("Element at index %d: ",i);
        scanf("%d",&arr[i]);
    }
    printf("Even element");
    for(int i=0;i<=9;i++){
        if(i%2==0) printf(" Element at index %d %d",i,arr[i]);
        printf("\n");
    }
    printf("Odd element");
    for(int i=0;i<=9;i++){
        if(i%2!=0) printf("Element at index %d %d",i,arr[i]);
         printf("\n");
        
    }
    return 0;

}
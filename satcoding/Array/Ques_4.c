#include<stdio.h>
int  main(){
    int n;
    printf("Enter tha size of array");
    scanf("%d",&n);
    if( n<=0) {
        printf(" Array size can not less than 0 ");
    }
    else {
    int arr[n];
    printf("Enter tha Element :");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if( arr[i]==arr[j]){
                printf("%d",arr[i]);
            }
        }
    }
    }
    return 0;
}
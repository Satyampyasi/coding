#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    int ispresent[n+1];
    for(int i=0;i<n;i++){
        ispresent[i]=0;
    }
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        ispresent[arr[i]] = 1;
        }
        printf("The missing element are:");
        for(int i=1;i<=n;i++){
            if(ispresent[i]==0)printf("%d ",i);
        }
        printf("\n");
    return 0;
}
    
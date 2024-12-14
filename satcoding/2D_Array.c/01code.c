#include<stdio.h>
int main(){
     int r,c;
     printf("Enter tha no of row: ");
     scanf("%d",&r);
     printf("Enter tha no of row: ");
     scanf("%d",&c);
    
    int arr[r][c];//9 total elemnes
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
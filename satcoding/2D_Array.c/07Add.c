#include<stdio.h>
int main(){
    int r,c;
printf("Enter tha no of row: ");
     scanf("%d",&r);
     printf("Enter tha no of column: ");
     scanf("%d",&c);
     printf("Enter all elment");
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
   for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        printf("%d ",arr[i][j]+brr[i][j]);
              }
      printf("\n");
}
}
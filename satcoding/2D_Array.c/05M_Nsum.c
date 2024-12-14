#include<stdio.h>
int main(){
     int r,c,sum;
     printf("Enter tha no of row: ");
     scanf("%d",&r);
     printf("Enter tha no of column: ");
     scanf("%d",&c);
     printf("Enter all ellment");
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           sum=sum+arr[i][j];
        }
    }
     printf("This sum of 2d matrix %d",sum);
    }
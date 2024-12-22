#include<stdio.h>
int main(){
int c,r;
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
       int brr[c][r];
       for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
         brr[i][j]=arr[j][i];
        }
    }
       for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d",brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
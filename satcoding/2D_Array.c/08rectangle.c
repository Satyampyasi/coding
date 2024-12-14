#include<stdio.h>
int main(){
int c,r,l1,r1,l2,r2,sum=0;
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
    printf( "enter tha value of l1 and r1 ");
    scanf("%d%d",&l1,&r1);
    printf( "enter tha value of l2 and r2  ");
    scanf("%d%d",&l2,&r2);

    for(int i=l1;i<=l2;i++){
         for(int j=r1;j<=r2;j++){
            sum = sum+arr[i][j];
         } 
    }
       printf("%d",sum);
       return 0;
    }
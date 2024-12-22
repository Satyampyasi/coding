#include<stdio.h>
int main(){
int c,r,count,max=0,d;
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
    for(int i=0;i<r;i++){
        count=0;
        for(int j=0;j<c;j++){
             if(arr[i][j]==1)  count++;
        }
         if( count>max) max = count; d=i;
    }
    printf(" maximun 1's  in %d no row ",d);
    return 0;
}
#include<stdio.h>
int main(){
int c,r,m,n;
int max=0;
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
      for(int i=0;i<r;i++)
       {
        int sum=0;
        for(int j=0;j<c;j++){
         sum = sum+arr[i][j];
        }
         if(sum>max)  max=sum ;m=i;
    }
    printf("This is a maximum %d in row %d",max,m);
    
    return 0;
}
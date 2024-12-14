#include<stdio.h>
int main(){
     int r,c,m=0,n=0,k=0,d=0;
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
    }    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
         int max= arr[0][0];
         int min=arr[0][0];
        for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
          if( arr[i][j]>max){max= arr[i][j];m=i;n=j;}
          if( arr[i][j]<min){ min= arr[i][j];k=i;d=j;}
        }
    }
printf("This is maximum %d at index:(%d,%d)\n",max,m,n);
printf("This is minimum %d at index:(%d,%d)",min,k,d);
    return 0;
}
#include<stdio.h>
int main(){

   int  arr[2][2]={{5,7},{1,2}};
   int brr[2][2]={{6,2},{5,8}};
   for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        printf("%d ",arr[i][j]+brr[i][j]);
              }
      printf("\n");
}
}
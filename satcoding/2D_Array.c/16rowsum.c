#include<stdio.h>
int main(){
int sumr,sumc,r,c;
   printf("Enter tha number of row:");
   scanf("%d",&r);
   printf("Enter tha number of column:");
   scanf("%d",&c);
   if( r>=48 && r<=57 && c>=48 && c<=48){
   int arr[r][c];
   printf("Enter tha array element:");
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&arr[i][j]);
    }
  }

   for(int i=0;i<r;i++){
       sumr =0;
       sumc=0;
    for(int j=0;j<c;j++){
        sumr= sumr+arr[i][j];
        sumc= sumc+arr[j][i];
              }
      printf("sum of %d row = %d\t",i,sumr);
      printf("sum of %d column = %d",i,sumc);
      printf("\n");
}
     
}
else printf("please enter tha number:");
return 0;
}
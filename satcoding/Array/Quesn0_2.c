#include<stdio.h>
int main(){
    int r1,c1,r2,c2,flag=0;
printf("Rows and Columns of the 1st matrix" );
scanf("%d%d",&r1,&c1);
printf("Rows and Columns of the 2st matrix" );
scanf("%d%d",&r2,&c2);
int arr[r1][c1];
int brr[r2][c2];
 if( r1!=r2 || c1!=c2){
    printf("Matrices with different dimensions cannot be compared");
    return 0;
 }
 printf("enter element of 1st matrix:");
for(int i=0;i<r1;i++){
     for(int j=0;j<c1;j++){
       scanf("%d",&arr[i][j]);
     }
}

printf("enter element of 2st matrix:");
for(int i=0;i<r2;i++){
    for(int j=0;j<c2;j++){
        scanf("%d",&brr[i][j]);
    }
}


for(int i=0;i<r2;i++){
    for(int j=0;j<c2;j++){
        if( arr[i][j]!=brr[i][j]) flag=1;
    }
}
  if(flag ==1)printf("matrix are not equal");
    else printf("Matrix are equal");
 
return 0;

}
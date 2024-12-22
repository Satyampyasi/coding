int main(){
int r1,c1,r2,c2,flag=0;
  start:
   printf("Enter tha number of row 1st matrix:");
   scanf("%d",&r1);
   printf("Enter tha number of column 1st matrix:");
   scanf("%d",&c1);
   if(r1<0||c1<0) printf("row column cannot be negative  \n"); goto start;
   int arr[r1][c1];
   printf("Enter tha array element 1st matrix:");
  for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
        scanf("%d",&arr[i][j]);
    }
  }
   start2:
    printf("Enter tha number of row 2st matrix:");
   scanf("%d",&r2);
   printf("Enter tha number of column 2nt matrix:");
   scanf("%d",&c2);
   int brr[r2][c2];
   if(r2<0||c2<0) printf("row & column column cannot be negative   \n"); goto start2;
   printf("Enter tha array element 2nt matrix:");
  for(int i=0;i<r2;i++){
    for(int j=0;j<c2;j++){
        scanf("%d",&brr[i][j]);
    }
    
  }   
     if( r1!=r2 && c1!=c2) {
        printf("Two matrices are not equal.");
        return 0;
        }
       else {
        for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
          if(arr[i][j]!=brr[i][j]) flag=1;
            }
            }  
            }
         if(flag=1)printf("two matrix are not equal");
         else printf(" two matrix are equal");

  }

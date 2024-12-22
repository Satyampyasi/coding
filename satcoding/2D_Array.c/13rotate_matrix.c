#include<stdio.h>
int main(){
int n;
     printf("Enter tha no of row/column: ");
     scanf("%d",&n);
    int arr[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
             scanf("%d",&arr[i][j]);
            }
        }
        printf("\n");
        // transpose tha matrix
            for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int temp = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i] = temp;
          }
          }

          //  print transpose:
              for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
             printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
         printf("\n");

          // roatate tha 90 degre
          for(int i=0;i<n;i++){
            int j=0;
            int k=n-1;
            while(j<k){
                int temp =arr[i][j];
                arr[i][j]=arr[i][k];
                arr[i][k]=temp;
                j++;
                k--;
            }
          }

          // print after rotate 
          for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
             printf("%d ",arr[i][j]);
            }
            printf("\n");
    
        }
        return 0;
 }
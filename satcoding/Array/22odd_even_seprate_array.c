#include<stdio.h>
int main(){
    int n;
   int eve[100];
   int odd[100];
   int  counteve=0;
   int  countodd=0;
    printf("enter tha no of array");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
      printf("Enter tha element at index %d: ",i);
      scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
           eve[counteve]=arr[i];
           counteve+=1;
        }
        else {
          odd[countodd]=arr[i];
          countodd+=1;
          }
    }
      printf("This is even array:[");
      for(int i=0;i<counteve;i++){
         printf("%d ",eve[i]);
      }
      printf("]");
      printf("\nThis is odd array:[");
      for(int i=0;i<countodd;i++){
        printf("%d ",odd[i]);
      }
      printf("]");
      return 0;
}
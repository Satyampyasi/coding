#include<stdio.h>
int main(){
    int  n,Delete;

    printf("Enter tha no of elements in the array:");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
    printf(" Enter tha element at index%d: ",i);
    scanf("%d",&arr[i]);
                        }
    printf("Enter tha element to delete");
   scanf("%d",&Delete);
        
         int count=0;
       for(int i=0;i<n;i++) {
         if(Delete!=arr[i]){
             arr[count]=arr[i];
             count+=1;
         }
       }
       for(int i=0;i<count;i++){
        printf("%d ",arr[i]);
       }
       return 0;
}
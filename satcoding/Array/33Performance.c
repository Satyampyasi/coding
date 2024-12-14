#include<stdio.h>
int main(){
    int n,score=0,i,j,sum=0,count=0;
    float average=0;

    printf("Enter th number of employees:");
    scanf("%d",&n);

    int arr[n];
    printf("Enter tha performance scores: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     for(i=0;i<n;i++){
        sum+=arr[i];
     }
     average=(sum/n);
     printf("Average of performance score %2.f\n",average);
      for(i=0;i<n;i++){
        if( average < arr[i]) {
                score++ ;
                arr[count]=arr[i];
                count++;
        }
      }
      printf("Number of employee score above avrage: %d\n",score);
      printf("score of employee above average:[ ");
      for(int i=0;i<count;i++){
        printf("%d ,",arr[i]);
      }
      printf("\b]");
      return 0;
}
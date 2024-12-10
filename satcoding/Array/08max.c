#include<stdio.h>
int main(){
   int arr[5];
    for(int i=0;i<=4;i++){
    printf(" Enter tha element:");
    scanf("%d",&arr[i]);}
   
   int max = arr[0];
   int min = arr[0];
   for(int i=0;i<=4;i++){
    if( arr[i]>max) max= arr[i];
    if( arr[i]<min) min= arr[i];
   }
   printf("Max %d\n",max);
   printf("Min %d",min);
   return 0;
}
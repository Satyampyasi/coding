#include<stdio.h>
int main(){
    int arr[4];
    int sum=0;
    for(int i=0;i<=3;i++){
        int a=i+1;
        printf("Enter tha element %d==",a);
        scanf("%d",&arr[i]);
         sum  = sum + arr[i];
    }
  printf("%d",sum);
  return 0;
}
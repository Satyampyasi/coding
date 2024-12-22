#include<stdio.h>
int main(){
    int n;
    printf("Enter tha value of n");
    scanf("%d",&n);
    if(n<0) {
        printf("Invalid input. Program terminated.");
        }
        else {
               for(int i=1;i<=n;i++){
              if(i%2!=0) printf("%d ",i);
               }
        }
        return 0;
}
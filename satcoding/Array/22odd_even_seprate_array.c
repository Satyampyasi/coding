#include<stdio.h>
int main(){
    int arr[6]={5,4,3,7,2,6};
    int eve[100];
    int odo[100];
    for(int i=0;i<5;i++){
        if(arr[i]%2==0){
            eve[i]=arr[i];
        }
        else odo[i]=arr[i];
    }
      for(int i=1;i<6;i++){
        printf("The Even array is [%d]",eve[i]);
       
      }
      return 0;
}
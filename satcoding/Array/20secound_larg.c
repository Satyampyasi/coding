#include<stdio.h>
int main(){
    int arr[10]={3 ,4,1, 9, 8, 88, 9, 88, 88, 1};
    int secoundmax;
     int max = arr[0];
     for(int i=0;i<=9;i++){
      if(max < arr[i]) {
        secoundmax=max;
         max=arr[i];
     }
}
 printf("%d",secoundmax);
     return 0;
}

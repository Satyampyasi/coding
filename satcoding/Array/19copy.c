#include<stdio.h>
int main(){
    int arr[3]={15,10,12};
    int brr[3];
    for(int i=0;i<=2;i++){
         brr[i]= arr[i];
    }
    for(int i=0;i<=2;i++){
        printf("Tha copy element  %d\n",brr[i]);
    }
    return 0;
}
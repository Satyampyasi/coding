#include<stdio.h>
int main(){
    int arr[4]={5,5,2,2};
    int pro=1;
    for(int i=0;i<=3;i++)
    {
      pro=pro*arr[i];
    }
    printf("%d",pro);
    return 0;
}
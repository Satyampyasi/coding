#include<stdio.h>
int main(){
    int marks[6]={35,36,21,80,45,18};
    for(int i=0;i<=5;i++){
       if(marks[i]<=35)printf("%d\n",i);
    }
    return 0;
}
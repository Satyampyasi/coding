#include<stdio.h>
int main(){
    int i=1;
    a:
    if(i<11){
    printf("%d\n",i);
    ++i;
    goto a;
    }
    
}
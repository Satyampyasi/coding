#include<stdio.h>
int main(){
    int P,R,T;
    float CI;
    printf(" Enter tha value of princiapl  rate time ");
    scanf("%d%d%d",&P,&R,&T);
    CI= (P*R*T)/100;
    printf(" Tha compund interest is %f",CI);
    return 0;

}
#include<stdio.h>
int main (){
    float F,C;
    printf( "Enter tha value of tem in Fahreheit :");
    scanf("%f",&F);
    C = (5.0/9.0)*(F-32);// formula to canvert f to c
    printf("Tha value in centigrate is:%f",C);
    return 0;
}
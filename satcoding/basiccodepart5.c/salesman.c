/*sales>=100000 sales<100000
Basic=10000 Basic=10000
Da=65.5% of basic Da=65.5% of basic
Bonus=10000 Bonus=2000
Comm.=10% of sales Comm.=5% of sales

Gross = Basic + da + bonus + commission*/
#include<stdio.h>
int main(){
    float sales,basic=10000,Da=6500,bonus,comm,gross;
    printf("enter tha sales:");
    scanf("%f",&sales);
    if(sales>=100000)
    {
        bonus=2000;
        comm=sales*10/100;
        gross = basic+Da+bonus+comm;
        printf("commission %f\n",comm);
        printf("bonus=2000\n");
        printf("Tha gross salary of this months:%f",gross);
    }
    else{
        bonus=1000;
        comm=sales*5/100;
        gross = basic+Da+bonus+comm;
        printf("commission %f\n",comm);
        printf("bonus=1000\n");
        printf("Tha gross salary of this months:%f",gross);
    }
    return 0;
}
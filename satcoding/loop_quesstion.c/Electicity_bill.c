/*Electricity bill generation:

SLAB SYSTEM

UNITS UNIT PRICE
1-50      1.45
51-100    2.8
101-200   3.05
201-300   4.75
301-500   6.00
>500      6.25

30 UNITS = 30*1.45 = 43.5
80 = 50*1.45+(80-50)*2.8=156.5
180 = 50*1.45+50*2.8+80*3.05=456.5
580 – 50*1.45+50*2.8+100*3.05+100*4.75+200*6+80*6.25=2692.5*/
#include<stdio.h>
int main(){
    long unit,pre,cur ;
    float bill;
    printf(" enter previous reading and enter curent reading");
    scanf("%ld%ld",&pre,&cur);
    unit = cur-pre;
    if(cur<pre)puts("invalid reading");
    else if(unit<=50)  bill = unit*1.45;
    else if(unit<=100) bill = 50*1.45+(unit-50)*2.8;
    else if(unit<=200) bill = 50*1.45+50*2.8+(unit-100)*3.05;
    else if(unit<=300) bill = 50*1.45+50*2.8+100*3.05+(unit-200)*4.75;
    else if(unit<=500) bill = 50*1.45+50*2.8+100*3.05+100*4.75+(unit-300)*6;
    else bill = 50*1.45+50*2.8+100*3.05+100*4.75+200*6+(unit-500)*6.25;
    if( pre = cur) bill = 50;
    printf("Tha bill is %f",bill);
    return 0;

}
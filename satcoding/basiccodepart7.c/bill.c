/*Write a C program to input electricity unit charges and calculate the total 
electricity bill according to the following conditions:
-> For the first 50 units: Rs. 0.50 per unit
-> For the next 100 units: Rs. 0.75 per unit
-> For the next 100 units: Rs. 1.20 per unit
-> For units above 250: Rs. 1.50 per unit

Additionally, a surcharge of 20% is added to the bill.
Enter the number of units: 28
Total electricity bill: Rs. 318.00
*/
#include<stdio.h>
int main(){
    int unit;
    float bill;
    printf(" Enter tha unit consumed");
    scanf(" %d",&unit);
    if( unit <=50)printf(" Tha unit is %d\n Bill is %f",unit,unit*0.50);
    else if(unit >=50) {
    bill= 0.50*50+(unit-50)*0.75;
    printf(" Tha unit is %d\n Bill is %f",unit,bill);
    }
    else if(unit>=100){
     bill=50*0.50+50*0.75+(unit-100)*1.25;
     printf(" Tha unit is %d\n Bill is %f",unit,bill);
    }
    else if(unit>=200) {
    bill =50*0.50+50*0.75+100*1.25+(unit-200)*1.50;
    printf(" Tha unit is %d\n Bill is %f",unit,bill);
    }
    else printf(" wrong data ");
    return 0;
}


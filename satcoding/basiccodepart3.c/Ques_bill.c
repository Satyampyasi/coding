/*Write a C program (without using the ternary operator) to 
calculate the electricity bill for a given number of units consumed by a customer.
 The billing rates are as follows:
For the first 100 units, the rate is Rs. 3.00 per unit.
For units between 101 and 200, the rate is Rs. 4.50 per unit.
For units above 200, the rate is Rs. 6.00 per unit.

Examples:

-> Units consumed less than or equal to 100

Sample-run-1
------------
Sample Input: units consumed: 75
Sample Output: The total electricity bill is: Rs. 225.00
*/
#include<stdio.h>
int main(){
    float unit,a,b,c;
    printf("Enter tha unit");
    scanf("%f",&unit);
    c = unit*3;
    a = (unit-100)*4.50;
    b = (unit - 200)*6;
    (unit<=100) && printf( "tha bill without discount %f",c)
    ||(unit>100 && unit<=200) && printf(" Tha disount get %f",a+300 ) 
    ||(unit>200) && printf(" tha discount is %f",b+750);
    return 0;
}
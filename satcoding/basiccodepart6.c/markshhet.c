/*Write a C program to find the sum and average of a student's marks
 in five subjects. The program should take the marks as input, calculate the
  sum and percentage, and then print both the sum and percentage using an if 
  statement?

Note :-
-------
Add validation to ensure that marks are non-negative.

Sample-run
----------
Test Case-1 :-
--------------
-> Input: 80, 70, 90, 85, 75
-> Expected Output:
-> Sum of marks: 400
-> Percentage: 80.00%
-> Result: "The student has passed."
*/
#include<stdio.h>
int main(){
 int m,c,p,s,h,sum;
 float per;
 printf("Enter tha marks ");
 scanf("%d%d%d%d%d",&m,&c,&p,&s,&h);
 if(m<0||c<0||p<0||s<0||h<0){
    printf("please enter tha positive marks");
 }
 else{
    sum = m+c+p+s+h;
    per=sum/5;
    printf("tha sum is %d\n persenatge is %f",sum,per);
 }
 return 0;
}
#include<stdio.h>
int main()
//calaculate gross salary 
{
 int salary,dearness,rent ,gross_salary;
 printf("Enter tha Ramesh's basic salary: ");
 scanf("%d",&salary);
 // dearness allowance is 40% = 2/5calculate in RS
  dearness =(salary*2)/5;
 printf(" dearness is %d\n" ,dearness);
 //home rent 20% =1/5 calculate in rs  
 rent= (salary/5);
 printf(" Home rent is%d\n",rent);

 gross_salary=salary+rent+dearness;
 printf("Tha gross_salary is %d\n",gross_salary);

 return 0;
}
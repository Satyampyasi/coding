#include<stdio.h>
int main(){
    char operation;
    double num1,num2;
    
    printf("Enter tha operator + - * /");
    scanf("%c",&operation);
    
    printf("enter tha two operant");
    scanf("%lf%lf",&num1,&num2);
switch (operation){
    case '+':
    printf( "%.2lf +%.2lf= %.2lf\n",num1,num2, num1+num2);
    break;
     
    case '-':
    printf("%lf-%lf=%lf",num1,num2,num1-num2);
    break;

    case '*':
    printf("%lf*%lf=%lf",num1,num2,num1*num2);
    break;
     
     case'/':
     printf("%lf/%lf= %lf",num1,num2,num1/num2);

     default:
     printf("invaliid");
}
return 0;
}
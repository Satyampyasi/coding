#include<stdio.h>
int main()
{
    int i;
    double number,sum = 0.0;
    for(i=1;i<11;++i){
        printf("Enter tha value of number ");
        scanf("%lf",&number);
        sum+= number;
        if( number<0){
            break;
        }
    }
printf("Tha sum of no is %lf",sum);
return 0;
}

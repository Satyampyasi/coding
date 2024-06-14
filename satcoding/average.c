#include<stdio.h>
int main()
{
    float math,bio,che,phy,eng,total;
    printf("enter tha mark of math");
    scanf("%f",&math);
    printf("enter tha marks of bio ");
    scanf("%f",&bio);
    printf("enter tha mark of che");
    scanf("%f",&che);
    printf("enter tha marks of phy");
    scanf("%f",&phy);
    printf("enter tha marks of eng");
    scanf("%f",&eng);
    total  = (math+bio+che+phy+eng)/5;
    printf("Tha average of marks is %f ",total);
    return 0;
}
#include<stdio.h>
int main(){
    float R,area ,l,b, area_r;
    printf("Enter tha value of radious");
    scanf("%f",&R);
    area=(3.14*R*R);
    printf("Area of circle is %f\n",area);
    //Area of rectangle
    printf("Enter tha value of length and breadth");
    scanf("%f%f",&l,&b);
    area_r=l*b;
    printf("Tha area of recatngle  is %f\n ",area_r);

    return 0;

}
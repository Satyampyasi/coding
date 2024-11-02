/* BIG amoung 3 digit by loop*/
#include <stdio.h>
 int main() 
 {
    int a,b,c;
    printf("enter tha value of a b c",a,b,c);
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && a==c) printf("all are equal");
    else if(a>b && a>c) printf(" a is big");
    else if( a==b && a>c) printf(" a and b is big ");
    else if ( a==c && a>b) printf(" a  and c big");
    else if( b==c && b>a) printf(" b and c is big ");
    else if (b>c)printf("b is big ");
    else (" c is big");
     return 0; 
     }
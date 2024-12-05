#include<stdio.h>
int main(){
    int n,rev,c=0,r,a,b;
    printf("Enter tha number ");
    scanf("%d",&n);
    for( a=1;a<=n;a++)
       {
        for(b=a,rev=0;b!=0;b=b/10)
        {
        r=b%10;
        rev=rev*10+r;
        }
        if(a==rev)printf("%4d",a,c++);
    }
    printf("\n%d palindrome",c);
    return 0;
}
#include<stdio.h>
int main(){
    int num;
    printf(" Enter tha number ");
    scanf(" %d",&num);
    if(num==0) puts(" zero");
    else if( num>0) puts(" positive ");
    else  puts( "negative" );
    return 0;
}
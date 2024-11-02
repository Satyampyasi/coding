/*Finding no of days in given month:
1,3,5,7,8,10,12 – 31 days
2 – 28/29 days
4,6,9,11 – 30 days
Others – invalid*/
#include<stdio.h>
int main(){
    int mon;
    printf(" Enter tha no of months 1 to 12");
    scanf("%d",&mon);
    if( mon = 1||3||5||7||8||10||12 ) puts (" 31 days");
    else if( mon == 2) puts(" 28/29");
    else if( mon = 4||6||9||11) puts("30 days ");
    else puts(" invalid");
    return 0;
}
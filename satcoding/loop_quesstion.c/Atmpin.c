#include<stdio.h>
int main(){
    int pin;
    int count=0;
    again:
    printf("  Enter tha pin ");
    scanf(" %d\n",&pin);
    if( pin == 1234)
    {
        printf("welcome to bank");
    }
    else {
        count=count+1;
        if(count==3)
        {
          printf("Try after 24 hours");
        }
        else {
            printf("invalid pin  ");
            goto again;
        }
    }
    return 0;
}

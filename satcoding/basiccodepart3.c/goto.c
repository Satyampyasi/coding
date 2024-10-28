#include<stdio.h>
int main()
{
    goto a;
    c:
    puts("good night"); exit(0);
    b:
    puts("good afternoon");
    goto c;
    a:
    puts("good morning ");
    goto b;
    
}
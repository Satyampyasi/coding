#include<stdio.h>
int main()
{
    int count , num, sum = 0;
    printf("Enter tha value of integer ");
    //Sum of n natural number 
    scanf("%d",&num);
    for(count =1;count<=num;++count){
        sum+= count;
    }
    printf("Tha of  natural number %d", sum);
    return 0;
    
}
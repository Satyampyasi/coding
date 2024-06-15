#include<stdio.h>
int main(){
    int number;
    printf("Enter tha value between 1 to 7");
    scanf("%d",&number);
    switch(number){
        case 1:
        printf("monday");
        break;

        case 2:
        printf("twesday");
        break;

        case 3:
        printf("wednesday");
        break;

        case 4:
        printf("Thursday");
        break;

        case 5:
        printf("friday");
        break;

        case 6:
        printf("saturday");
        break;
        
        case 7:
        printf("sunday");

        default:
        printf("Error! operator");
    
    return 0;
}
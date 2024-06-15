#include<stdio.h>
int main(){
    int number;
    while(1){
        printf("enter tha value ");
        scanf("%d",&number);
        if( number < 0){
            break;
        }
        
    }
    printf(" you enter tha negavtive value %d\n",number);
    return 0;
}
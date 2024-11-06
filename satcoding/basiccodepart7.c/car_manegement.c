#include<stdio.h>
int main(){
    int whel,mon,pro,tire;
    char a[100],b[100];
    printf("Enter tha vehicle is (2 or 3 or 4)? wheelrs");
    scanf("%d",&whel);
    if(whel==2||whel==3||whel==4)
    {
     printf("How old is Vehicle: ");
     scanf("%d",&mon);
        if(mon>8){
        printf(" Enter problem no.  \n1 for tires\n  2 for fuel \n  3 for engine \n 4 general servicing:)");
        scanf("%d",&pro);
         if( pro==1||pro==2||pro==3||pro==4){
         if( pro==1)
         { 
            printf("Enter your name = ");
            scanf("%s",&a);
            printf("Enter your bike name = ");
            scanf("%s",&b);
            printf("How many tires is damage = ");
            scanf(" %d",&tire);
            printf("The tires are damage\n");
            printf("customer name := %s\n",a);
            printf("Bike name is :=%s\n",b);
            printf("Tha bill is =%d : ",tire*400);
            

         }
         else if( pro==2){
         
            printf(" fuel problem tha cost is 1500");
         }
         else if( pro==3){
          
            printf("  For engine issues , Tha cost is RS 5000");

         }
         else if(pro==4)
         {
            
            printf(" For general servicing, the cost is Rs. 1000.");
         }
         }
        
      }
     else printf(" Your vehicle service will be done after a while.");
    }
    else printf("no service for your vehicle");
    return 0;
}
/*   printf(" Enter your name  ");
            scanf("%c\n",&ch);
            printf("Enter bike name");
            scanf("%c\n",&bk);
            printf(" Name of owner %c\n",ch);
            printf("Name of bike %c\n",bk);
            */
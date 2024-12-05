/*-Enter Cost Price (CP): ₹50     fix item sell is 100
Enter Selling Price (SP): ₹60
Profit per unit = ₹10
Total Profit on 100 units = ₹1000

Enter Cost Price (CP): ₹50
Enter Selling Price (SP): ₹45
Loss per unit = ₹5
Total Loss on 100 units = ₹500
*/
#include<stdio.h>
int main(){
    int cp,sp,p,l;
    printf(" Enter tha amount of sp  and cp");
    scanf(" %d%d",&sp,&cp);
    if( cp>sp){
        l=cp-sp;
        printf(" loss per unit = %d\n",l);
        printf(" Tottal loss is= %d",l*100);
    }
    else if(sp>cp){
        p=sp-cp;
        printf(" profit per unit= %d\n",p);
        printf("Tottal profir is =%d",p*100);
    }
    else printf(" No loss no profit");
    return 0;
}
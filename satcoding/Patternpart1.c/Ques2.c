#include<stdio.h>
int main(){
    int nr,nc,r,c;
    printf("enter tha number of row amd column");
    scanf("%d%d",&nr,&nc);
    for(r=1;r<=nr;r++){
    for(c=1;c<=nc;c++){
    printf("%3d",r);
    }
    printf("\n");
    }
}
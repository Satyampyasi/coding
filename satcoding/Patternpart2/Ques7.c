#include<stdio.h>
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("%3c",' ');
        }
        int tem=i*2-1;
        for(int k=1;k<2*i;k++){
          printf("%3d",tem); 
          tem--;
        }
        // for(int s=1;s<i;s++){
        //     printf("%3d",tem);
        //     tem--;
        // }
        printf("\n");
    }
    return 0;

}
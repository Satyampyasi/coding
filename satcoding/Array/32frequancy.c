#include<stdio.h>
int main(){
     int  n,i,count,j,temp;

    printf("Enter tha no of elements in the array:");
    scanf("%d",&n);
    int arr[n];

    for( i=0;i<n;i++){
    printf(" Enter tha element");scanf("%d",&arr[i]); 
    }
     for( i=0;i<n;i++){
         count=0;
            if(temp!=arr[i]){
            for( j=0;j<n;j++){
            if(arr[i]==arr[j])count++;
                  } 
            if(count==1)printf("%d occurs = %d time\n",arr[i],count);
            else printf("%d occurs = %d times\n",arr[i],count);      
    } 
        for(j=0;j<n;j++) {
        if(arr[j]==arr[i]) temp=arr[j]; 
        }
     }
              
              
}
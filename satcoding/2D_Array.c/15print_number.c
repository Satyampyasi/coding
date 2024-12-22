#include <stdio.h>

int main() {
    int i, j, num;
    int rows, cols;

    // Input the number of rows and columns from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    
    
    for(i = 0; i < rows; i++) {
             num=0;
             num=i+1;
        for(j = 0; j < cols; j++) {
           
            printf("%d\t", num);
            num += rows; 
        }
      
        printf("\n");
    }

    return 0;
}

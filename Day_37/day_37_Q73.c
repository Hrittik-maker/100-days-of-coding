//Find the sum of each row of a matrix and store it in an array.
#include<stdio.h>
int main(void){
    int rows, cols, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);     
    int matrix[rows][cols];
    int row_sums[rows];
    // Initialize row sums to 0 
    for(i = 0; i < rows; i++){
        row_sums[i] = 0;
    }
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            scanf("%d", &matrix[i][j]);
            row_sums[i] += matrix[i][j];
        }
    }   
    printf("The sum of each row is:\n");
    for(i = 0; i < rows; i++){  
        printf("Sum of row %d: %d\n", i + 1, row_sums[i]);
    }
    return 0;   
}   
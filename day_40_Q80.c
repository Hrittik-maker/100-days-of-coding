//Multiply two matrices.
#include <stdio.h>
int main(void) {
    int rows1, cols1, rows2, cols2, i, j, k;
    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &rows1, &cols1);     
    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &rows2, &cols2);     
    if (cols1 != rows2) {
        printf("Error! Number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return 1;
    }     
    int matrix1[rows1][cols1];
    int matrix2[rows2][cols2];
    int result[rows1][cols2];     
    printf("Enter the elements of the first matrix:\n");            
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {      
            scanf("%d", &matrix1[i][j]);
        }
    }     
    printf("Enter the elements of the second matrix:\n");         
    for (i = 0; i < rows2; i++) {       
        for (j = 0; j < cols2; j++) {      
            scanf("%d", &matrix2[i][j]);
        }
    }     
    // Initialize the result matrix to 0
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            result[i][j] = 0;
        }
    }     
    // Multiply the matrices                
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            for (k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }     
    printf("The product of the two matrices is:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {   
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }     
    return 0;   
}   
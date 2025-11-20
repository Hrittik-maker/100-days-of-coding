//Perform diagonal traversal of a matrix.
#include<stdio.h>
int main(void){
    int rows, cols, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);     
    int matrix[rows][cols];
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){      
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The diagonal traversal of the matrix is:\n");
    // Traverse the matrix diagonally
    for(i = 0; i < rows + cols - 1; i++){
        if(i % 2 == 0){     
            // Even index diagonals (bottom-left to top-right)
            int r = (i < rows) ? i : rows - 1;
            int c = i - r;
            while(r >= 0 && c < cols){
                printf("%d ", matrix[r][c]);
                r--;
                c++;
            }
        } else {
            // Odd index diagonals (top-right to bottom-left)
            int c = (i < cols) ? i : cols - 1;
            int r = i - c;
            while(c >= 0 && r < rows){
                printf("%d ", matrix[r][c]);
                r++;
                c--;
            }
        }
    }
    printf("\n");
    return 0;   
}
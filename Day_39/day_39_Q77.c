//Check if the elements on the diagonal of a matrix are distinct.
#include<stdio.h>
#include<stdbool.h> 
int main(void){
    int n, i, j;
    bool distinct = true;
    printf("Enter the order of the square matrix (n x n): ");
    scanf("%d", &n);     
    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){      
            scanf("%d", &matrix[i][j]);
        }
    }
    // Check for distinct diagonal elements
    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if(matrix[i][i] == matrix[j][j]){
                distinct = false;
                break;
            }
        }
        if(!distinct){
            break;
        }
    }
    if(distinct){
        printf("The diagonal elements are distinct.\n");
    } else {
        printf("The diagonal elements are not distinct.\n");
    }
    return 0;   
}   
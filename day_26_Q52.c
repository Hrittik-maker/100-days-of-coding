// //Write a program to print the following pattern:

// *

// *
// *
// *

// *
// *
// *
// *
// *

// *
// *
// *

// *


#include<stdio.h>
int main(void){
    int i, j, rows = 5, spaces;
    for(i = 1; i <= rows; i++){      // Loop for each row
        for(spaces = 1; spaces <= rows - i; spaces++){ // Print leading spaces
            printf(" ");
        }
        for(j = 1; j <= i; j++){ // Print asterisks
            printf("*\n");
        }
    }   
    return 0;
}   

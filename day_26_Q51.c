// //Write a program to print the following pattern:
//     5
//    45
//   345
//  2345
// 12345
#include<stdio.h>
int main(void){
    int i, j, rows = 5, spaces;
    for(i = rows; i >= 1; i--){
        for(spaces = 1; spaces <= i - 1; spaces++){
            printf(" ");
        }
        for(j = i; j <= rows; j++){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}   
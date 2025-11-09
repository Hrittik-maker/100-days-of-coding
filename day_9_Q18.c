//Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
//90-100: Grade A 
//80-89: Grade B 
//70-79: Grade C 
//60-69: Grade D 
//below 60: Grade F.
#include <stdio.h>
int main(void){
    int percentage;
    printf("Enter the percentage obtained: ");
    scanf("%d",&percentage);
    if (percentage >= 90 && percentage <= 100){

        printf("Grade obtained is A\n");
    } else if (percentage >= 80 && percentage <= 89) {
        printf("Grade obtained is B\n");
    } else if (percentage >= 70 && percentage <= 79) {
        printf("Grade obtained is C\n");
    } else if (percentage >= 60 && percentage <= 69) {
        printf("Grade obtained is D\n");
    } else {
        printf("Grade obtained is F\n");
    }
    return 0;
}

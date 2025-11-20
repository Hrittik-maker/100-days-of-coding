//Write a program to check if a number is a perfect number.
#include<stdio.h>
int main(void){
    int number, i, sum_of_factors = 0;
    printf("Enter a positive integer to check if it is a perfect number: ");
    scanf("%d", &number);
    // A perfect number is equal to the sum of its proper divisors (excluding itself)
    for(i = 1; i <= number / 2; i++){
        if(number % i == 0){
            sum_of_factors += i;
        }
    }
    if(sum_of_factors == number){
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }
    return 0;
}
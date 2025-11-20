//Write a program to check if a number is prime.
#include<stdio.h>
#include<stdbool.h>
int main(void){
    int number, i;
    bool is_prime = true;
    printf("Enter a positive integer to check if it is prime: ");
    scanf("%d", &number);
    if(number <= 1){
        is_prime = false;
    } else {
        for(i = 2; i <= number / 2; i++){
            if(number % i == 0){
                is_prime = false;
                break;
            }
        }
    }
    if(is_prime){
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }
    return 0;
}
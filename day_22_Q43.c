//Write a program to check if a number is a strong number.
#include<stdio.h>
unsigned long long factorial(int n){
    unsigned long long fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}
int main(void){
    int number, temp, remainder, sum_of_factorials = 0;
    printf("Enter a positive integer to check if it is a strong number: ");
    scanf("%d", &number);
    temp = number;
    while(temp != 0){
        remainder = temp % 10;
        sum_of_factorials += factorial(remainder);
        temp /= 10;
    }
    if(sum_of_factorials == number){
        printf("%d is a strong number.\n", number);
    } else {
        printf("%d is not a strong number.\n", number);
    }
    return 0;
}
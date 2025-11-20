//Write a program to find the HCF (GCD) of two numbers.
#include<stdio.h>
int main(void){
    int num1, num2, hcf, i;
    printf("Enter two positive integers to find their HCF (GCD): ");
    scanf("%d %d", &num1, &num2);
    // HCF is the largest number that divides both num1 and num2
    for(i = 1; i <= num1 && i <= num2; i++){
        if(num1 % i == 0 && num2 % i == 0){
            hcf = i;
        }
    }
    printf("The HCF (GCD) of %d and %d is: %d\n", num1, num2, hcf);
    return 0;
}   
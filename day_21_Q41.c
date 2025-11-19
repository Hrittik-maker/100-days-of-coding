//Write a program to swap the first and last digit of a number.
#include<stdio.h>
#include<math.h>
int main(void){
    int number, first_digit, last_digit, num_digits, middle_part, swapped_number;
    printf("Enter an integer number to swap its first and last digits: ");
    scanf("%d", &number);
    
    // Handle negative numbers
    int is_negative = 0;
    if(number < 0){
        is_negative = 1;
        number = -number;
    }

    last_digit = number % 10;
    num_digits = (int)log10(number); // Number of digits - 1
    first_digit = (int)(number / pow(10, num_digits));
    
    // If the number has only one digit, no swap needed
    if(num_digits == 0){
        swapped_number = number;
    } else {
        middle_part = number % (int)pow(10, num_digits); // Remove first digit
        middle_part /= 10; // Remove last digit
        swapped_number = last_digit * (int)pow(10, num_digits) + middle_part * 10 + first_digit;
    }

    // Restore negative sign if needed
    if(is_negative){
        swapped_number = -swapped_number;
    }

    printf("The number after swapping the first and last digits is: %d\n", swapped_number);
    return 0;
}
//Find the digit that occurs the most times in an integer number.
#include<stdio.h>
int main(void){
    int number, digit_count[10] = {0}, digit, i, max_count = 0, most_frequent_digit = -1;
    printf("Enter an integer number: ");
    scanf("%d", &number);
    if(number < 0){
        number = -number; // Make number positive if it's negative
    }
    // Count occurrences of each digit
    while(number > 0){
        digit = number % 10;
        digit_count[digit]++;
        number /= 10;
    }
    // Find the digit with the maximum count
    for(i = 0; i < 10; i++){
        if(digit_count[i] > max_count){
            max_count = digit_count[i];
            most_frequent_digit = i;
        }
    }   
    if(most_frequent_digit != -1){
        printf("The digit that occurs the most is: %d (occurs %d times)\n", most_frequent_digit, max_count);
    } else {
        printf("No digits found in the input number.\n");
    }
    return 0;
}   
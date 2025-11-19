//Write a program to find the 1’s complement of a binary number and print it.
#include<stdio.h>
int main(void){
    long long binary_number, temp, remainder, ones_complement = 0, place_value = 1;
    printf("Enter a binary number: ");
    scanf("%lld", &binary_number);
    temp = binary_number;
    while(temp != 0){
        remainder = temp % 10;
        // Flip the bit: 0 becomes 1, 1 becomes 0
        if(remainder == 0){
            ones_complement += 1 * place_value;
        }
        // Move to the next bit
        place_value *= 10;
        temp /= 10;
    }
    printf("The 1's complement of the binary number %lld is: %lld\n", binary_number, ones_complement);
    return 0;
}   
//Write a program to display the day of the week based on a number (1–7) using switch-case.
#include<stdio.h>
int main (void){

    int day_number;
    printf("Enter a number (1-7) to get the correspondong day of the week: ");
    scanf("%d", &day_number);
    switch (day_number) {
        case 1:
        printf("The day entered is Monday\n");
        break;

        case 2:
        printf("The day entered is Tuesday\n");
        break;
        
        case 3:
        printf("The day entered is Wednesday\n");
        break;
        
        case 4:
        printf("The day entered is Thursday\n");
        break;

        case 5:
        printf("The day entered is Friday\n");
        break;
    
        case 6:
        printf("The day entered is Saturday\n");
        break;
    
        case 7:
        printf("The day entered is Sunday\n");
        break;

    default:
        printf("invalid input! please enter a number between 1 & 7\n");
    }
    return 0;
}
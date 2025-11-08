//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>
int main (void){
printf("enter a number that u wanna know is positive or negative or zero:\t ");
int n;
scanf("%d", &n);
if (n<=0) {
    printf("The entered number is negative\n");

}
else if (n>=0) {
    printf("entered number is positive\n");
}
else {
    printf("The entered number is zero\n");
}
return 0;
}
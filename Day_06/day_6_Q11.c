//Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>
int main (void){
printf("type the no. u wanna check is odd or even : \n");
int n;
scanf("%d", &n);
if (n %2 ==0){
    printf("The number enterted is even\n ");
}
else {
    printf("The number entered is odd\n");

}
return 0;
}
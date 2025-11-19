//Write a program to find profit or loss percentage given cost price and selling price.
#include<stdio.h>
int main(void){
    float cost_price, selling_price, profit, loss, profit_percentage, loss_percentage;
    printf("Enter the cost price: ");
    scanf("%f", &cost_price);
    printf("Enter the selling price: ");
    scanf("%f", &selling_price);
    if(selling_price > cost_price){
        profit = selling_price - cost_price;
        profit_percentage = (profit / cost_price) * 100;
        printf("You made a profit of %.2f which is %.2f%% of the cost price.\n", profit, profit_percentage);
    }
    else if(cost_price > selling_price){
        loss = cost_price - selling_price;
        loss_percentage = (loss / cost_price) * 100;
        printf("You incurred a loss of %.2f which is %.2f%% of the cost price.\n", loss, loss_percentage);
    }
    else{
        printf("No profit, no loss. You broke even.\n");
    }
    return 0;
}   
#include <stdio.h>
int main() {
    double revenue;
    double expenses;
    double balance;
    printf("MUNICIPAL BUDGET CALCULATOR\n");
    printf("Enter the total revenue: ");
    scanf("%lf", &revenue);
    printf("Enter the total expenses: ");
    scanf("%lf", &expenses);
    balance = revenue - expenses;
    printf("\nRevenue: $%.2f\n", revenue);
    printf("Expenses: $%.2f\n", expenses);
    printf("Balance: $%.2f\n", balance);
    return 0;
}

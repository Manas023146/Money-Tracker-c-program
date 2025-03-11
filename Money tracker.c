#include <stdio.h>

// Function 
void addIncome(float *totalIncome, float income);
void addExpense(float *totalExpense, float expense);
float calculateBalance(float totalIncome, float totalExpense);

int main() {
    float totalIncome = 0.0, totalExpense = 0.0, balance;
    float amount;
    int choice;

    printf("Welcome to the Daily Money Tracker!\n");

    while (1) {
        printf("\nChoose an option:\n");
        printf("1. Add Income\n");
        printf("2. Add Expense\n");
        printf("3. View Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 4) {
            printf("Exiting the Daily Money Tracker. Goodbye!\n");
            break;  
        }

        switch (choice) {
            case 1:
                printf("Enter income amount: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    addIncome(&totalIncome, amount);
                    printf("Income of %.2f added successfully.\n", amount);
                } else {
                    printf("Income must be a positive value.\n");
                }
                break;
            case 2:
                printf("Enter expense amount: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    addExpense(&totalExpense, amount);
                    printf("Expense of %.2f added successfully.\n", amount);
                } else {
                    printf("Expense must be a positive value.\n");
                }
                break;
            case 3:
                balance = calculateBalance(totalIncome, totalExpense);
                printf("Total Income: %.2f\n", totalIncome);
                printf("Total Expense: %.2f\n", totalExpense);
                printf("Current Balance: %.2f\n", balance);
                break;
            default:
                printf("Invalid choice! Please choose a valid option.\n");
        }
    }

    return 0;
}

// Function to add income
void addIncome(float *totalIncome, float income) {
    *totalIncome += income;
}

// Function to add expense
void addExpense(float *totalExpense, float expense) {
    *totalExpense += expense;
}

// Function to calculate the balance
float calculateBalance(float totalIncome, float totalExpense) {
    return totalIncome - totalExpense;
}

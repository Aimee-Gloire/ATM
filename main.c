#include <stdio.h>

// Function to check balance
void check_balance(float balance) {
    printf("Your current balance is: $%.2f\n", balance);
}

// Function to deposit money
float deposit(float balance) {
    float amount;
    printf("Enter amount to deposit: ");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("Deposit amount must be a positive number.\n");
    } else {
        balance += amount;
        printf("Deposit successful! New balance: $%.2f\n", balance);
    }

    return balance;
}

// Function to withdraw money
float withdraw(float balance) {
    float amount;
    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("Withdrawal amount must be positive.\n");
    } else if (amount > balance) {
        printf("Insufficient funds. Your balance is $%.2f\n", balance);
    } else {
        balance -= amount;
        printf("Withdrawal successful! New balance: $%.2f\n", balance);
    }

    return balance;
}

// Main program
int main() {
    float balance = 1000.00; // Starting balance
    int choice;

    while (1) {
        printf("\n--- ATM Machine ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                check_balance(balance);
                break;
            case 2:
                balance = deposit(balance);
                break;
            case 3:
                balance = withdraw(balance);
                break;
            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                return 0; // Exit the program
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

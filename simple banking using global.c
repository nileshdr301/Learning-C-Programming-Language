#include <stdio.h>

// Global variable to store balance
int balance = 1000;

// Deposit function
int deposit(int amt)
{
    // Add deposit amount to balance
    balance = balance + amt;

    // Return 0
    return 0;
}

// Withdraw function
int withdraw(int amt)
{
    // Check if balance is enough
    if(balance >= amt)
    {
        // Subtract amount from balance
        balance = balance - amt;
    }

    // Return 0
    return 0;
}

int main()
{
    // Deposit ?500
    deposit(500);

    // Withdraw ?200
    withdraw(200);

    // Display final balance
    printf("Balance = %d", balance);

    // End of program
    return 0;
}

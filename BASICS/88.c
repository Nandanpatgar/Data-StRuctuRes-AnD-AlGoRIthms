//88.Validate an ATM withdrawal using balance, withdrawal amount, and minimum-balance rules.

#include <stdio.h>

int main()
{
    int balance, amount;

    printf("Enter account balance: ");
    scanf("%d", &balance);

    printf("Enter withdrawal amount: ");
    scanf("%d", &amount);

    if (balance < 500 || amount <= 0)
        printf("Invalid transaction");
    else if (amount % 100 != 0)
        printf("Amount must be multiple of 100");
    else if (amount > balance)
        printf("Insufficient balance");
    else if (balance - amount < 500)
        printf("Minimum balance must be maintained");
    else
    {
        balance = balance - amount;

        printf("Withdrawal successful\n");
        printf("Remaining balance = Rs. %d", balance);
    }

    return 0;
}
/*91. ATM Banking Management System
Problem Statement
Develop an ATM system that allows users to:
1. Check account balance.
2. Deposit money.
3. Withdraw money.
4. Display transaction history.
5. Exit the application.*/

#include <stdio.h>

int main()
{
    int choice, amount;
    int balance = 10000;

    do
    {
        printf("\n===== ATM SYSTEM =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Balance = %d\n", balance);
                break;

            case 2:
                printf("Enter deposit amount: ");
                scanf("%d", &amount);

                if(amount > 0)
                {
                    balance += amount;
                    printf("Deposit successful\n");
                }
                else
                    printf("Invalid amount\n");

                break;

            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%d", &amount);

                if(amount <= 0)
                    printf("Invalid amount\n");
                else if(balance - amount < 500)
                    printf("Insufficient balance\n");
                else
                {
                    balance -= amount;
                    printf("Withdrawal successful\n");
                    printf("Remaining balance: %d\n", balance);

                    printf("Transaction: ");

                    for(int i = 1; i <= amount / 1000; i++)
                        printf("*");

                    printf("\n");
                }

                break;

            case 4:
                printf("Thank you!\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while(choice != 4);

    return 0;
}
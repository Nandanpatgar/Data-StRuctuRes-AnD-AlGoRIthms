//94.Restaurant Ordering System

#include <stdio.h>

int main()
{
    int choice, qty;
    float total = 0, price, discount;

    do
    {
        printf("\n===== RESTAURANT MENU =====\n");
        printf("1. Burger - Rs.100\n");
        printf("2. Pizza - Rs.200\n");
        printf("3. Sandwich - Rs.80\n");
        printf("4. Juice - Rs.50\n");
        printf("5. Generate Bill\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                price = 100;
                break;

            case 2:
                price = 200;
                break;

            case 3:
                price = 80;
                break;

            case 4:
                price = 50;
                break;

            case 5:
                continue;

            default:
                printf("Invalid choice\n");
                continue;
        }

        printf("Enter quantity: ");
        scanf("%d", &qty);

        if(qty <= 0)
            printf("Invalid quantity\n");
        else
        {
            total += price * qty;
            printf("Item added successfully\n");
        }

    } while(choice != 5);

    if(total > 500)
        discount = total * 0.10;
    else
        discount = 0;

    printf("\n******** BILL ********\n");
    printf("Total: %.2f\n", total);
    printf("Discount: %.2f\n", discount);
    printf("Final Amount: %.2f\n", total - discount);

    return 0;
}
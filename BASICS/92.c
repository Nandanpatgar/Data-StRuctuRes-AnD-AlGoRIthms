/*92.Supermarket Billing System
Problem Statement
Develop a supermarket billing system that:
1. Accepts the number of products.
2. Accepts product price and quantity.
3. Calculates the total bill.
4. Applies discounts based on the purchase amount.*/

#include <stdio.h>

int main()
{
    int n, i, qty;
    float price, total = 0, discount, finalBill;

    printf("Enter number of products: ");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Invalid number of products");
        return 0;
    }

    for(i = 1; i <= n; i++)
    {
        printf("\nProduct %d\n", i);

        printf("Enter price: ");
        scanf("%f", &price);

        printf("Enter quantity: ");
        scanf("%d", &qty);

        if(price < 0 || qty <= 0)
        {
            printf("Invalid input\n");
            i--;
            continue;
        }

        total += price * qty;
    }

    if(total >= 10000)
        discount = total * 0.15;
    else if(total >= 5000)
        discount = total * 0.10;
    else if(total >= 1000)
        discount = total * 0.05;
    else
        discount = 0;

    finalBill = total - discount;

    printf("\n******** BILL ********\n");
    printf("Total: Rs. %.2f\n", total);
    printf("Discount: Rs. %.2f\n", discount);
    printf("Final Bill: Rs. %.2f\n", finalBill);

    for(i = 1; i <= 20; i++)
        printf("*");

    return 0;
}
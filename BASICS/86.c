//86.Calculate cinema-ticket price based on age and whether it is a weekend.

#include <stdio.h>

int main()
{
    int age, weekend, price;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Is it weekend? (1-Yes, 0-No): ");
    scanf("%d", &weekend);

    if (age < 0 || (weekend != 0 && weekend != 1))
        printf("Invalid input");
    else
    {
        if (age < 12)
            price = 100;
        else if (age < 60)
            price = 200;
        else
            price = 150;

        if (weekend == 1)
            price = price + 50;

        printf("Ticket price = Rs. %d", price);
    }

    return 0;
}
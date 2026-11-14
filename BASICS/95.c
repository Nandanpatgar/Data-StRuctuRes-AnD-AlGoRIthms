//95.Parking Management System

#include <stdio.h>

int main()
{
    int n, i, type, hours;
    float rate, bill, total = 0;

    printf("Enter number of vehicles: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("\nVehicle %d\n", i);

        printf("1. Two-wheeler\n2. Car\n3. Bus\n");
        printf("Enter vehicle type: ");
        scanf("%d", &type);

        printf("Enter parking hours: ");
        scanf("%d", &hours);

        if(type < 1 || type > 3 || hours <= 0)
        {
            printf("Invalid input\n");
            i--;
            continue;
        }

        if(type == 1)
            rate = 20;
        else if(type == 2)
            rate = 50;
        else
            rate = 100;

        bill = rate * hours;

        if(hours > 5)
            bill = bill - bill * 0.10;

        total += bill;

        printf("Parking Bill: Rs. %.2f\n", bill);

        printf("Duration: ");

        for(int j = 1; j <= hours; j++)
            printf("*");

        printf("\n");
    }

    printf("\nTotal Parking Collection: %.2f", total);

    return 0;
}
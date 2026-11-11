//93.Electricity Consumption Monitoring System
#include <stdio.h>

int main()
{
    int n, i, units;
    int maxUnits = -1, maxHouse = 0;
    float bill, collection = 0;

    printf("Enter number of households: ");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Invalid input");
        return 0;
    }

    for(i = 1; i <= n; i++)
    {
        printf("\nEnter units for household %d: ", i);
        scanf("%d", &units);

        if(units < 0)
        {
            printf("Invalid units\n");
            i--;
            continue;
        }

        if(units <= 100)
            bill = units * 2;
        else if(units <= 200)
            bill = 200 + (units - 100) * 3;
        else if(units <= 300)
            bill = 500 + (units - 200) * 5;
        else
            bill = 1000 + (units - 300) * 7;

        collection += bill;

        printf("Bill = Rs. %.2f\n", bill);

        if(units > maxUnits)
        {
            maxUnits = units;
            maxHouse = i;
        }

        printf("Consumption: ");

        for(int j = 1; j <= units / 20; j++)
            printf("*");

        printf("\n");
    }

    printf("\nTotal Collection: %.2f", collection);
    printf("\nHighest Consumption: Household %d", maxHouse);

    return 0;
}
//96.Library Fine Calculation System

#include <stdio.h>

int main()
{
    int n, i, days, j;
    float fine, total = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("\nStudent %d\n", i);

        printf("Enter late days: ");
        scanf("%d", &days);

        if(days < 0)
        {
            printf("Invalid days\n");
            i--;
            continue;
        }

        if(days <= 5)
            fine = days * 2;
        else if(days <= 10)
            fine = 10 + (days - 5) * 5;
        else
            fine = 35 + (days - 10) * 10;

        total += fine;

        printf("Fine = Rs. %.2f\n", fine);

        printf("Late days: ");

        for(j = 1; j <= days; j++)
            printf("*");

        printf("\n");
    }

    printf("\nTotal Fine Collected = Rs. %.2f", total);

    return 0;
}
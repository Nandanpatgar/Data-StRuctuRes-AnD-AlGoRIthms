//80.Given age and income, determine whether a person qualifies under a loan rule.

#include <stdio.h>

int main()
{
    int age, income;

    printf("Enter age and monthly income: ");
    scanf("%d %d", &age, &income);

    if (age >= 21 && income >= 25000)
        printf("Eligible for loan");
    else
        printf("Not eligible for loan");

    return 0;
}
//98.Employee Salary Management System

#include <stdio.h>

int main()
{
    int n, i, j;
    float salary, bonus, tax, finalSalary;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("\nEmployee %d\n", i);

        printf("Enter basic salary: ");
        scanf("%f", &salary);

        if(salary < 0)
        {
            printf("Invalid salary\n");
            i--;
            continue;
        }

        if(salary < 20000)
            bonus = salary * 0.05;
        else if(salary <= 40000)
            bonus = salary * 0.10;
        else
            bonus = salary * 0.15;

        finalSalary = salary + bonus;

        if(finalSalary > 30000)
            tax = finalSalary * 0.05;
        else
            tax = 0;

        finalSalary -= tax;

        printf("Bonus = %.2f\n", bonus);
        printf("Tax = %.2f\n", tax);
        printf("Final Salary = %.2f\n", finalSalary);

        printf("Salary Chart: ");

        for(j = 1; j <= (int)(finalSalary / 5000); j++)
            printf("*");

        printf("\n");
    }

    return 0;
}
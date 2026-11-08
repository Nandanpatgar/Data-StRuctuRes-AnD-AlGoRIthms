/*90. Develop a menu-driven C program to manage student academic performance.

The program should accept student details, calculate their results, display grades, and generate a star-based performance chart.*/

#include <stdio.h>

int main()
{
    int n, i, j, choice;
    int marks[50][3];
    int total[50], pass = 0, fail = 0;
    int highest = 0, lowest = 0;
    float avg[50], classAvg = 0;
    char name[50][30];
    char grade[50][3];

    printf("Enter number of students: ");
    scanf("%d", &n);

    if (n <= 0 || n > 50)
    {
        printf("Invalid number of students");
        return 0;
    }

    // Input student details
    for (i = 0; i < n; i++)
    {
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%29s", name[i]);

        total[i] = 0;

        printf("Enter marks in 3 subjects: ");

        for (j = 0; j < 3; j++)
        {
            scanf("%d", &marks[i][j]);

            if (marks[i][j] < 0 || marks[i][j] > 100)
            {
                printf("Invalid marks. Enter again: ");
                j--;
                continue;
            }

            total[i] += marks[i][j];
        }

        avg[i] = total[i] / 3.0;

        if (marks[i][0] < 35 ||
            marks[i][1] < 35 ||
            marks[i][2] < 35)
        {
            grade[i][0] = '-';
            grade[i][1] = '\0';
            fail++;
        }
        else
        {
            pass++;

            if (avg[i] >= 90)
                grade[i][0] = 'A';
            else if (avg[i] >= 80)
                grade[i][0] = 'B';
            else if (avg[i] >= 70)
                grade[i][0] = 'C';
            else if (avg[i] >= 60)
                grade[i][0] = 'D';
            else
                grade[i][0] = 'E';

            grade[i][1] = '\0';
        }

        classAvg += avg[i];

        if (i == 0 || avg[i] > avg[highest])
            highest = i;

        if (i == 0 || avg[i] < avg[lowest])
            lowest = i;
    }

    classAvg = classAvg / n;

    // Menu
    do
    {
        printf("\n\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Display Results\n");
        printf("2. Display Statistics\n");
        printf("3. Performance Chart\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\nName\tAverage\tGrade\tResult\n");

                for (i = 0; i < n; i++)
                {
                    printf("%s\t%.2f\t%s\t%s\n",
                    name[i], avg[i], grade[i],
                    grade[i][0] == '-' ? "FAIL" : "PASS");
                }
                break;

            case 2:
                printf("\nTotal Students: %d", n);
                printf("\nPassed: %d", pass);
                printf("\nFailed: %d", fail);
                printf("\nClass Average: %.2f", classAvg);

                printf("\nHighest Scorer: %s", name[highest]);
                printf("\nLowest Scorer: %s", name[lowest]);
                break;

            case 3:
                printf("\n===== PERFORMANCE CHART =====\n");

                for (i = 0; i < n; i++)
                {
                    printf("%s : %.0f%% ", name[i], avg[i]);

                    for (j = 0; j < (int)(avg[i] / 10); j++)
                    {
                        printf("*");
                    }

                    printf("\n");
                }
                break;

            case 4:
                printf("Thank you for using the system!");
                break;

            default:
                printf("Invalid choice!");
        }

    } while (choice != 4);

    return 0;
}
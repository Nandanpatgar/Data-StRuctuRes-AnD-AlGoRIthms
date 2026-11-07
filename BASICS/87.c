//87.Create a student grading system: fail if any subject is below the minimum; otherwise grade by average.

#include <stdio.h>

int main()
{
    int m1, m2, m3;
    float avg;

    printf("Enter marks of three subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    if (m1 < 0 || m1 > 100 ||
        m2 < 0 || m2 > 100 ||
        m3 < 0 || m3 > 100)
        printf("Invalid marks");

    else if (m1 < 35 || m2 < 35 || m3 < 35)
        printf("Fail");

    else
    {
        avg = (m1 + m2 + m3) / 3.0;

        printf("Average = %.2f\n", avg);

        if (avg >= 90)
            printf("Grade A");
        else if (avg >= 80)
            printf("Grade B");
        else if (avg >= 70)
            printf("Grade C");
        else if (avg >= 60)
            printf("Grade D");
        else if (avg >= 50)
            printf("Grade E");
        else
            printf("Fail");
    }

    return 0;
}
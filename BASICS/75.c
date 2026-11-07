//75.Given marks, print the corresponding grade.

#include <stdio.h>

int main()
{
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100)
        printf("Invalid marks");
    else if (marks >= 90)
        printf("Grade A");
    else if (marks >= 80)
        printf("Grade B");
    else if (marks >= 70)
        printf("Grade C");
    else if (marks >= 60)
        printf("Grade D");
    else if (marks >= 40)
        printf("Grade E");
    else
        printf("Fail");

    return 0;
}
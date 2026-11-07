//81.Given three numbers, determine whether all are equal, exactly two are equal, or all are different.

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c)
        printf("All are equal");
    else if (a == b || b == c || a == c)
        printf("Exactly two are equal");
    else
        printf("All are different");

    return 0;
}
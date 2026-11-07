//79.Check whether a number is divisible by exactly one of 3 and 5.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if ((n % 3 == 0 && n % 5 != 0) ||
        (n % 3 != 0 && n % 5 == 0))
        printf("Divisible by exactly one");
    else
        printf("Not divisible by exactly one");

    return 0;
}


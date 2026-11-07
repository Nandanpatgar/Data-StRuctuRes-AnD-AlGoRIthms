//76.Check whether a number lies between 10 and 100.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n >= 10 && n <= 100)
        printf("Number lies between 10 and 100");
    else
        printf("Number does not lie between 10 and 100");

    return 0;
}
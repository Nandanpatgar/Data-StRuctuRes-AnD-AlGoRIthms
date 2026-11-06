//64.Check whether a number is divisible by both 3 and 5.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n % 3 == 0 && n % 5 == 0)
        printf("Divisible by both 3 and 5");
    else
        printf("Not divisible by both 3 and 5");

    return 0;
}
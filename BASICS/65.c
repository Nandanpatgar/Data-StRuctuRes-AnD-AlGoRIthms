//65.Check whether a number is a multiple of 7.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n % 7 == 0)
        printf("Multiple of 7");
    else
        printf("Not a multiple of 7");

    return 0;
}
//71.Check whether three sides can form a triangle.

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && b + c > a && a + c > b)
        printf("Triangle can be formed");
    else
        printf("Triangle cannot be formed");

    return 0;
}
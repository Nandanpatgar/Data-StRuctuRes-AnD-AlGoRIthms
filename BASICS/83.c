//83.Check whether a given time (HH:MM) is valid.

#include <stdio.h>

int main()
{
    int hh, mm;

    printf("Enter time (HH MM): ");
    scanf("%d %d", &hh, &mm);

    if (hh >= 0 && hh <= 23 && mm >= 0 && mm <= 59)
        printf("Valid time");
    else
        printf("Invalid time");

    return 0;
}
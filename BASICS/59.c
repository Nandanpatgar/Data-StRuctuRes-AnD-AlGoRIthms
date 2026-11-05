//59.Print Pascal's Triangle for N Rows

#include <stdio.h>

int main()
{
    int i, j, n, num;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        num = 1;

        for(j = 0; j < n-i-1; j++)
        {
            printf(" ");
        }

        for(j = 0; j <= i; j++)
        {
            printf("%d ", num);
            num = num * (i-j) / (j+1);
        }

        printf("\n");
    }

    return 0;
}
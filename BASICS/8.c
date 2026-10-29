//8. Print the first N multiples of a given number.
#include <stdio.h>

int main(void)
{
int num, n;


printf("Enter the number: ");
scanf("%d", &num);

printf("Enter N: ");
scanf("%d", &n);

for (int i = 1; i <= n; i++)
{
    printf("%d ", num * i);
}

printf("\n");
return 0;


}

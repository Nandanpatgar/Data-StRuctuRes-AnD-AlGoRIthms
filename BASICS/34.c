//34.Print the same number N times
#include <stdio.h>
int main() {
    int n, num, i;

    printf("Enter N: ");
    scanf("%d", &n);

    printf("Enter the number: ");
    scanf("%d", &num);

    for(i = 1; i <= n; i++) {
        printf("%d", num);
    }

    return 0;
}
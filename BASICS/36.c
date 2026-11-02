//36. Print a rectangle of N rows and M columns.
#include <stdio.h>
int main() {
    int n, m, i, j;

    printf("Enter rows and columns: ");
    scanf("%d%d", &n, &m);

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= m; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
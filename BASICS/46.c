//46.Print an Inverted Centered Pyramid

#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {

        // Print spaces
        for(j = 1; j < i; j++) {
            printf(" ");
        }

        // Print stars
        for(j = 1; j <= 2*(n-i)+1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
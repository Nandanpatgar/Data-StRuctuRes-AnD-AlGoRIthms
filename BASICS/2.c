//2. Print numbers from N down to 
#include <stdio.h>

int main(void) {
int n;


printf("Enter the size of n: ");
scanf("%d", &n);

for (int i = n; i > 0; i--) {
    printf("%d", i);
}

printf("\n");

return 0;


}
//89.Build login validation using username, password, and account status.

#include <stdio.h>
#include <string.h>

int main()
{
    char username[20], password[20];
    int status;

    printf("Enter username: ");
    scanf("%19s", username);

    printf("Enter password: ");
    scanf("%19s", password);

    printf("Enter account status (1-Active, 0-Inactive): ");
    scanf("%d", &status);

    if (status != 0 && status != 1)
        printf("Invalid account status");
    else if (status == 0)
        printf("Account is inactive");
    else if (strcmp(username, "admin") == 0 &&
             strcmp(password, "1234") == 0)
        printf("Login successful");
    else
        printf("Invalid username or password");

    return 0;
}
//97.Online Examination System

#include <stdio.h>

int main()
{
    int ans, score = 0, i;

    int correct[] = {2, 1, 3, 2, 1};

    for(i = 0; i < 5; i++)
    {
        printf("\nQuestion %d\n", i + 1);

        if(i == 0)
            printf("2 + 2 = ?\n1. 3  2. 4  3. 5\n");
        else if(i == 1)
            printf("Capital of India?\n1. Delhi  2. Mumbai  3. Chennai\n");
        else if(i == 2)
            printf("Which is a programming language?\n1. HTML  2. CSS  3. C\n");
        else if(i == 3)
            printf("How many bits in a byte?\n1. 4  2. 8  3. 16\n");
        else
            printf("Which is an even number?\n1. 6  2. 7  3. 9\n");

        printf("Enter answer: ");
        scanf("%d", &ans);

        if(ans < 1 || ans > 3)
            printf("Invalid answer\n");
        else if(ans == correct[i])
        {
            score += 4;
            printf("Correct!\n");
        }
        else
        {
            score -= 1;
            printf("Wrong!\n");
        }
    }

    printf("\nTotal Score = %d\n", score);

    if(score >= 10)
        printf("Result: PASS\n");
    else
        printf("Result: FAIL\n");

    printf("\nPerformance Chart:\n");

    for(i = 1; i <= score; i++)
    {
        if(i > 0)
            printf("*");
    }

    printf("\n");

    return 0;
}
#include <stdio.h>
#include <math.h>
int main()
{
    int score;
    printf("Score: ");
    scanf("%d", &score);
    if (score >= 80)
    {
        printf("Score: %d-> Grade: A (4.00) - Pass\n", score);
    }
    else if (score >= 75)
    {
        printf("Score: %d-> Grade: B+ (3.50) - Pass\n", score);
    }
    else if (score >= 70)
    {
        printf("Score: %d-> Grade: B (3.00) - Pass\n", score);
    }
    else if (score >= 65)
    {
        printf("Score: %d-> Grade: C+ (2.50) - Pass\n", score);
    }
    else if (score >= 60)
    {
        printf("Score: %d-> Grade: C (2.00) - Pass\n", score);
    }
    else if (score >= 55)
    {
        printf("Score: %d-> Grade: D+ (1.50) - Pass\n", score);
    }
    else if (score >= 50)
    {
        printf("Score: %d-> Grade: D (1.00) - Pass\n", score);
    }
    else
    {
        printf("Score: %d-> Grade: F (0.00) - Fail\n", score);
    }
    return 0;
}
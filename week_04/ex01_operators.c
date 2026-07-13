#include <stdio.h>
#include <math.h>
int main()
{
    int expression1 = 10 / 3;
    printf("10 / 3 = %d\n", expression1);

    float expression2 = 10.0 / 3;
    printf("10.0 / 3 = %.2f\n", expression2);

    float expression3 = (float)10 / 3;
    printf("(float)10 / 3 = %.2f\n", expression3);

    int expression4 = 10 % 3;
    printf("10 % 3 = %d\n", expression4);

    int expression5 = (-7) % 3;
    printf("(-7) % 3 = %d\n", expression5);

    int expression6 = 7 % (-3);
    printf("7 % (-3) = %d\n", expression6);

    int x = 5;
    printf("x++ = %d\n", x++);
    int y = 5;
    printf("++y = %d\n", ++y);

    int expression7 = 2 + 3 * 4;
    printf("2 + 3 * 4 = %d\n", expression7);

    int expression8 = (2 + 3) * 4;
    printf("(2 + 3) * 4 = %d\n", expression8);

    int expression9 = 10 - 2 - 3;
    printf("10 - 2 - 3 = %d\n", expression9);

    int expression10 = 2 * 3 + 4 * 5;
    printf("2 * 3 + 4 * 5 = %d\n", expression10);
    return 0;
}
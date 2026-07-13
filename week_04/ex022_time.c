#include <stdio.h>
#include <math.h>
int main()
{
    int hours, minutes, seconds;
    printf("Enter time in seconds: ");
    scanf("%d", &seconds);
    minutes = (seconds % 3600) / 60;
    seconds = seconds % 60;
    printf("Time: %02d:%02d:%02d\n", hours, minutes, seconds);
    return 0;
}
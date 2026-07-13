#include <stdio.h>
#include <math.h>
int main()
{
    float weight, height_cm;
    printf("=== BMI CALCULATOR ===\n");
    printf("Enter your weight (kg): ");
    scanf("%f", &weight);
    printf("Enter your height (cm): ");
    scanf("%f", &height_cm);
    float height_m = height_cm / 100.0;
    float bmi = weight / (height_m * height_m);
    printf("Your BMI is: %.2f ", bmi);
    if (bmi < 18.5)
    {
        printf("-> underweight.\n");
    }
    else if (bmi < 24.9)
    {
        printf("-> normal weight.\n");
    }
    else if (bmi < 29.9)
    {
        printf("-> overweight.\n");
    }
    else
    {
        printf("-> obese.\n");
    }
    return 0;
}

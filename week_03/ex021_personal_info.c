#include <stdio.h>
int main() {
    char name[100];
    int age;
    float gpa;
    char subject[100];

    printf("=== ENTER YOUR INFORMATION ===\n");
    printf("Name: ");
    scanf("%s", name);
    printf("Age: ");
    scanf("%d", &age);
    printf("GPA: ");
    scanf("%f", &gpa);
    printf("Subject: ");
    scanf("%s", subject);


    printf("=== PERSONAL CARD ===\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("GPA: %.2f\n", gpa);
    printf("Subject: %s\n", subject);
}
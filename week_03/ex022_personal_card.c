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
    scanf("%s", &subject);


    printf("=== PERSONAL CARD ===\n");
    printf("┌─────────────────────────────┐\n");
    printf("│ Name: %-25s │\n", name);
    printf("│ Age: %-25d │\n", age);
    printf("│ GPA: %-25.2f │\n", gpa);
    printf("│ Subject: %-25s │\n", subject);
    printf("└─────────────────────────────┘\n");
}
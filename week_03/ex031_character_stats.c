#include <stdio.h>
int main() {
    char name[100];
    int hp;
    int atk;
    int def;
    int level;


    printf("=== NEW CHARACTER ===\n");
    printf("NAME: ");
    scanf("%s", name);
    printf("MAX HP: ");
    scanf("%d", &hp);
    printf("ATTACK POWER: ");
    scanf("%d", &atk);
    printf("DEFENSE: ");
    scanf("%d", &def);
    printf("LEVEL: ");
    scanf("%d", &level);


    printf("=== CHARACTER ===\n");
    printf("NAME: %s \n", name);
    printf("MAX HP: %d \n", hp);
    printf("ATTACK POWER: %d \n", atk);
    printf("DEFENSE: %d \n", def);
    printf("LEVEL: %d \n", level);
}
#include <stdio.h>
int main() {
    char name[100];
    int maxhp;
    int hp;
    int atk;
    int def;
    int level;

    printf("=== NEW CHARACTER ===\n");
    printf("NAME: ");
    scanf("%s", name);
    printf("MAX HP: ");
    scanf("%d", &maxhp);
    printf("CURRENT HP: ");
    scanf("%d", &hp);
    printf("ATTACK POWER: ");
    scanf("%d", &atk);
    printf("DEFENSE: ");
    scanf("%d", &def);
    printf("LEVEL: ");
    scanf("%d", &level);

    if (hp > maxhp) {
        printf("Current HP cannot exceed Max HP. Set the HP to a new value lower than or equal to Max HP: ");
        scanf("%d", &hp);
    }

    printf("=== CHARACTER ===\n");
    printf("NAME: %s \n", name);
    printf("HP: %d / %d \n", hp, maxhp);
    printf("ATTACK POWER: %d \n", atk);
    printf("DEFENSE: %d \n", def);
    printf("LEVEL: %d \n", level);
    printf("HP BAR: [");
    int filledbar = (hp * 10) / maxhp;
    for (int i = 0; i < filledbar; i++) {
        printf("O");
    }
    for (int i = filledbar; i < 10; i++) {
        printf("-");
    }
    printf("] ");
    printf("%.0f%%\n", (float)hp / maxhp * 100);
    return 0;
}
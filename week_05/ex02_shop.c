#include <stdio.h>
#include <math.h>
int main()
{
    int gold = 1000;
    int choice;
    char item[5][100] = {
        "Health Potion: 50 Gold",
        "Mana Potion: 80 Gold",
        "Iron Sword: 500 Gold",
        "Leather Armor: 300 Gold",
        "Exit"};
    char effect[5][100] = {
        "Health +50",
        "Mana +30",
        "ATK Bonus : +20",
        "DEF Bonus : +15",
        "Exit"};
    printf("=== ITEM SHOP ===\n");
    printf("Gold: %d\n", gold);
    printf("1. Health Potion - 50 Gold (+50 HP)\n");
    printf("2. Mana Potion - 80 Gold (+30 MP)\n");
    printf("3. Iron Sword - 500 Gold (+20 ATK)\n");
    printf("4. Leather Armor - 300 Gold (+15 DEF)\n");
    printf("5. Exit\n");
    printf("Select item: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        gold -= 50;
        item[0];
        effect[0];
        break;
    case 2:
        gold -= 80;
        item[1];
        effect[1];
        break;
    case 3:
        gold -= 500;
        item[2];
        effect[2];
        break;
    case 4:
        gold -= 300;
        item[3];
        effect[3];
        break;
    case 5:
        printf("Exiting the shop.\n");
    }
    printf("=== Purchase ===\n");
    printf("Item: %s\n", item);
    printf("Remaining: %d\n", gold);
    printf("%s\n", effect);
}
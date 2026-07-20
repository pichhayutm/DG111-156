#include <stdio.h>
#include <math.h>

int main()
{
    int max_hp, damage, poison, attack_count;
    _Bool is_poisoned;

    printf("Enter max HP: ");
    scanf("%d", &max_hp);
    if (max_hp > 999)
    {
        printf("Max HP cannot exceed 999: ");
        scanf("%d", &max_hp);
    }

    printf("Enter damage: ");
    scanf("%d", &damage);
    if (damage > max_hp)
    {
        printf("Damage cannot exceed Max HP: ");
        scanf("%d", &damage);
    }

    printf("Is poisoned (1 for yes, 0 for no): ");
    scanf("%d", &poison);
    is_poisoned = poison ? 1 : 0;

    printf("Enter attack count: ");
    scanf("%d", &attack_count);
    int hp = max_hp - damage;
    int PercentHP = (hp * 100) / max_hp;

    printf("\nMax HP: %d\n", max_hp);
    printf("Damage Taken: %d\n", damage);
    printf("Poisoned: %s\n", is_poisoned ? "Yes" : "No");
    printf("Attack Count: %d\n", attack_count);
    printf("=== Character Status ===\n");

    printf("HP BAR: [");
    int filledbar = (hp * 10) / max_hp;
    for (int i = 0; i < filledbar; i++)
        printf("O");
    for (int i = filledbar; i < 10; i++)
        printf("-");
    printf("] %d%%\n", PercentHP);
    printf("State: ");

    if (hp <= 0)
    {
        printf("DEAD ");
    }
    else
    {
        int has_status = 0;

        if (PercentHP <= 25)
        {
            printf("CRITICAL ");
            has_status = 1;
        }
        if (is_poisoned)
        {
            printf("POISONED ");
            has_status = 1;
        }
        if (attack_count >= 5)
        {
            printf("NORMAL+Ultimate! ");
            has_status = 1;
            if (attack_count >= 5 && PercentHP <= 25)
            {
                printf("Ultimate! ");
                has_status = 1;
            }
        }
        if (!has_status)
        {
            printf("NORMAL");
        }
    }
    printf("\n");
    return 0;
}
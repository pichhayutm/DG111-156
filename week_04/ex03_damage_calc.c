#include <stdio.h>
#include <math.h>
int main()
{
    int playerattack, enemydefense, hitnumber;
    printf("Enter player attack: ");
    scanf("%d", &playerattack);
    printf("Enter enemy defense: ");
    scanf("%d", &enemydefense);
    printf("Enter hit number: ");
    scanf("%d", &hitnumber);
    int damage = (playerattack - enemydefense);
    if (hitnumber % 5 == 0)
    {
        damage = (int)ceil((float)damage * 1.5);
    }
    printf("=== COMBAT SIMULATOR ===\n");
    printf("Player Attack: %d\n", playerattack);
    printf("Enemy Defense: %d\n", enemydefense);
    printf("Hit Number: %d\n", hitnumber);
    if (hitnumber >= 5)
    {
        printf("Damage: %d *** CRITICAL HIT! x1.5 ***\n", damage);
    }
    else
    {
        printf("Damage: %d (Normal)\n", damage);
    }
    return 0;
}
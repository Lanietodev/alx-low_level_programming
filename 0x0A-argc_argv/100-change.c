#include <stdio.h>
#include <stdlib.h>

/**
*main - Entry point
*@argc: number of arguments
*@argv: array of arguments
*Return: 0 on success, 1 on failure
*/

int main(int argc, char *argv[])
{
int i, cents, num_coins, total_coins, coins_needed, coins[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}

cents = atoi(argv[1]);

if (cents < 0)
{
printf("0\n");
return (0);
}

num_coins = sizeof(coins) / sizeof(coins[0]);

total_coins = 0;
i = 0;

while (cents > 0 && i < num_coins)
{
coins_needed = cents / coins[i];
total_coins += coins_needed;
cents -= coins_needed * coins[i];
i++;
}

printf("%d\n", total_coins);
return (0);
}

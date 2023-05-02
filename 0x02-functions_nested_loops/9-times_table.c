#include "main.h"
/**
 * times_table - entry point
 *
 * Return: time (success)
*/
void times_table(void)
{
int i, j;

for (j = 0; j <= 9; j++)
{
for (i = 0; i <= 9; i++)
{
_putchar('0' + i*j);
if (i < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}

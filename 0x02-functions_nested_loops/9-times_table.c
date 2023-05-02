#include "main.h"
/**
 * times_table - entry point
 *
 * Return: 0 (success)
*/
void times_table(void)
{
for (int j = 0; j <= 9; j++)
{
for (int i = 0; i <= 9; i++)
{
int  multiply = i * j;

if (i == 0)
{
_putchar('0');
}
else if (multiply > 9)
{
_putchar(',');
_putchar(' ');
_putchar(multiply / 10 + '0');
_putchar(multiply % 10 + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(multiply + '0');
}
}
_putchar('\n');
}
}

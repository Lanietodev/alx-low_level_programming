#include "main.h"
/**
* print_diagonal - draws a diagonal line on the terminal
* @n: parameter to check
* Return: 0 (success)
*/
void print_diagonal(int n)
{
	int i, j;

for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
if (n <= 0)
{
_putchar('\n');
}
else if (i == j)
{
_putchar('\\');
}
else
{
_putchar(' ');
}
}
_putchar('\n');
}
}

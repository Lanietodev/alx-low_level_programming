#include "main.h"
/**
* print_diagonal - draws a diagonal line on the terminal
* @n: parameter to check
* Return: 0 (success)
*/
void print_diagonal(int n)
{
	int i, j;

if (n <= 0)
{
putchar('\n');
}
else
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
if (i == j)
{
_putchar('\\');
}
else if (j < i)
{
_putchar(' ');
}
}
_putchar('\n');
}
}
}

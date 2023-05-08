#include "main.h"
/**
* print_diagonal - draws a diagonal line on the terminal
* @n: parameter to check
* Return: 0 (success)
*/
void print_diagonal(int n)
{
for (int i = 0; i < n; i++)
{
for (int j = 0; j < n; j++)
{
if (n <= 0)
{
putchar('\n');
}
else if (i == j)
{
putchar('\\');
}
else
{
putchar(' ');
}
}
putchar('\n');
}
}

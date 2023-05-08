#include "main.h"
/**
* print_triangle - prints a triangle
* @size: parameter to check
* Return: 0 (success)
*/
void print_triangle(int size)
{
	int i, j, k;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i < size; i++)
{
for (j = 0; j <= size - i; j++)
{
_putchar(' ');
}
for (k = 1; k <= 2 * i - i; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
}

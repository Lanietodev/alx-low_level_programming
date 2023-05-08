#include "main.h"
/**
* print_line - draws a straight line in the terminal
* @n: parameter to check
* Return: 0 (success)
*/
void print_line(int n)
{
for (int i = 0; i < n; i++)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
_putchar('-');
}
}
_putchar('\n');
}

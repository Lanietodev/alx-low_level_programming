#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints numbers to 98
 *
 * @n: initial value
 * Return: 0 (success)
*/
void print_to_98(int n)
{
int i;

if (n <= 98)
{
for (i = n; i <= 98; i++)
{
printf("%d", i);
if (i != 98)
{
printf(",");
printf(" ");
}
}
}
else
{
for (i = n; i >= 98; i--)
{
printf("%d", i);
if (i != 98)
{
printf(",");
printf(" ");
}
}
}
printf("\n");
}

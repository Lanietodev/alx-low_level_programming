#include <stdio.h>
#include "main.h"
/**
 * print_times_table - entry point
 *
 * @n: param
 * Return: 0 (success)
*/
void print_times_table(int n)
{
if (n > 15 || n < 0)
{
return (0);
}
else
{
int i, j;

for (j = 0; j <= n; j++)
{
for (i = 0; i <= n; i++)
{
int  multiply = i * j;

if (i == 0)
{
printf("0");
}
else if (multiply > 99)
{
printf(", ");
printf("%d", multiply);
}
else if (multiply > 9)
{
printf(",  ");
printf("%d", multiply);
}
else
{
printf(",   ");
printf("%d", multiply);
}
}
printf("\n");
}
}
}

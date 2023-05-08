#include "main.h"
/**
* main - entry point
* @n: parameter to check
* Return: 0 (success)
*/
void print_number(int n)
{
	int i, j, temp;

if (n < 0)
{
_putchar('-');
n = -n;
}
int digitCount = 0;
for (temp = n; temp > 0; temp /= 10)
{
digitCount++;
}
for (i = digitCount - 1; i >= 0; i--)
{
int divisor = 1;
for (j = 0; j < i; j++)
{
divisor *= 10;
}
_putchar(n / divisor % 10 + '0');
}
}

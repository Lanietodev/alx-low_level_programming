#include "main.h"
/**
* print_number - Write a function that prints an integer.
* @n: parameter to check
* Return: 0 (success)
*/
void print_number(int n)
{
int divisor = 1;
if (n < 0)
{
_putchar('-');
if (n == INT_MIN)
{
_putchar('2');
n = -(n + 2000000000);
}
else
{
n = -n;
}
}
while (n / divisor >= 10)
{
divisor *= 10;
}
while (divisor > 0)
{
int digit = n / divisor;
_putchar(digit + '0');
n -= digit * divisor;
divisor /= 10;
}
}

#include "main.h"
/**
* print_number - Write a function that prints an integer.
* @n: parameter to check
* Return: 0 (success)
*/
void print_number(int n)
{
int divisor = 1;
if (n == INT_MIN)
{
putchar('-');
putchar('2');
putchar('1');
putchar('4');
putchar('7');
putchar('4');
putchar('8');
putchar('3');
putchar('6');
putchar('4');
putchar('8');
}
if (n < 0)
{
_putchar('-');
n = -n;
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

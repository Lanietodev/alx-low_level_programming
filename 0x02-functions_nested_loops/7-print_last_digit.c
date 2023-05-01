#include "main.h"
/**
 * print_last_digit - entry point
 *
 * @n: value to check
 * Return: last digit (success)
*/
int print_last_digit(int n)
{
int last_digit = n % 10;
if (n < 0)
{
last_digit *= -1;
}
_putchar('0' + last_digit);
return (last_digit);
}

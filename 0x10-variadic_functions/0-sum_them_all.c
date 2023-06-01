#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - Sums up a variable number of integers.
 *
 * @n: The number of integers to sum.
 * @...: The variable arguments representing the integers to sum.
 *
 * Return: The sum of the integers.
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i, sum = 0;
va_list arg;
va_start(arg, n);

if (n == 0)
return (0);
for (i = 0; i < n; i++)
{
sum += va_arg(arg, int);
}
va_end(arg);
return (sum);
}

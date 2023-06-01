#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers separated by a separator.
 * @separator ptr: The string used to separate the numbers
 * @n: The number of integers passed to the function.
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i, num;

va_list arg;
va_start(arg, n);
for (i = 0; i < n; i++)
{
num = va_arg(arg, int);
printf("%d", num);
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
va_end(arg);
printf("\n");
}

#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 *
 * @separator ptr: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 * @...: Variable number of string arguments.
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;

va_list arg;
va_start(arg, n);
for (i = 0; i < n; i++)
{
str = va_arg(arg, char*);
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);        }
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
va_end(arg);
printf("\n");
}

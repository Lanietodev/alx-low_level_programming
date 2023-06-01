#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything based on the given format.
 *
 * @format: List of types of arguments passed to the function.
 *          c: char
 *          i: integer
 *          f: float
 *          s: char *
 *          Any other char is ignored.
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
va_list arg;
unsigned int i = 0;
char *str;
int num;
float fnum;

va_start(arg, format);
while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(arg, int));
break;
case 'i':
printf("%d", va_arg(arg, int));
break;
case 'f':
printf("%f", va_arg(arg, double));
break;
case 's':
str = va_arg(arg, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
break;
default:
i++;
continue;}

if (format[i + 1] != '\0')
printf(", ");
i++;
}
va_end(arg);
printf("\n");
}

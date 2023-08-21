#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Entry point
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: NULL
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, int));

		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ptr);
}

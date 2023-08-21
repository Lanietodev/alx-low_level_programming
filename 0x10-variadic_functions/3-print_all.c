#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - print char, integer, float amd string
 * @format: format
 */

void print_all(const char * const format, ...)
{
	va_list ptr;
	unsigned int j = 0, start = 0;
	char *p;

	va_start(ptr, format);
	while (format && format[j] != '\0')
	{
		switch (format[j])
		{case 'c':
			switch (start)
			{case 1: printf(", "); }
			start = 1;
			printf("%c", va_arg(ptr, int));
			break;
		case 'i':
			switch (start)
			{case 1: printf(", "); }
			start = 1;
			printf("%i", va_arg(ptr, int));
			break;
		case 'f':
			switch (start)
			{case 1: printf(", "); }
			start = 1;
			printf("%f", va_arg(ptr, double));
			break;
		case 's':
			switch (start)
			{case 1: printf(", "); }
			start = 1;
			p = va_arg(ptr, char*);
			if (p)
			{ printf("%s", p);
			break; }
			printf("%p", p);
			break; }
		j++;
	}
	printf("\n");
	va_end(ptr);
}

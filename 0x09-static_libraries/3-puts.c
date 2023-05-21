#include "main.h"
/**
 * _puts - prints a string
 *
 * @str ptr:  A pointer to a string
 * Return: 0 (success)
*/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}

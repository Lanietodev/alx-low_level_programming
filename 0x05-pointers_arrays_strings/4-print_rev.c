include "main.h"
/**
 * print_rev - prints a string, in reverse
 *
 * @s ptr:  A pointer to a string
 * Return: 0 (success)
*/
void print_rev(char *s)
{
int len, i;
len = 0;

while (s[len] != '\0')
{
len++;
}
for (i = len - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}

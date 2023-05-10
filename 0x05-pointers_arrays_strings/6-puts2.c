#include "main.h"
/**
 * puts2 - prints every other character of a string
 *
 * @str ptr:  A pointer to a string
 * Return: 0 (success)
*/
void puts2(char *str)
{
int len = 0;
int i;

while (str[len] != '\0')
{
len++;
}
for (i = 0; i < len; i = i + 2)
{
_putchar(str[i]);
}
_putchar('\n');
}

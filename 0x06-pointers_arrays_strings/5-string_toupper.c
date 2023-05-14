#include <stdio.h>
#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @str ptr: string pointer
 * Return: Always 0 (Success)
 */
char *string_toupper(char *str)
{
int i, j;
i = 0;
while (str[i] != '\0')
{
i++;
}
str[i] = '\0';
for (j = 0; j < i; j++)
{
if (str[j] >= 97 && str[j] <= 122)
{
str[j] -= 32;
}
}
return (str);
}

#include <stdio.h>
#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @str ptr: string pointer
 * Return: Always 0 (Success)
 */
char *cap_string(char *str)
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
if (str[0] >= 97 && str[0] <= 122)
{
str[0] -= 32;
};
switch (str[j])
{
case 32:
case 9:
case 10:
case 44:
case 59:
case 46:
case 33:
case 63:
case 34:
case 123:
case 125:
case 40:
case 41:
if (str[j + 1] >= 97 && str[j + 1] <= 122)
{
str[j + 1] -= 32;
};
default:
break;
}
}
return (str);
}

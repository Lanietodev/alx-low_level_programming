#include <stdio.h>
#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @str ptr: string pointer
 * Return: Always 0 (Success)
 */
char *leet(char *str)
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
if (str[j] == 65 || str[j] == 97)
{
str[j] = 52;
}
else if (str[j] == 101 || str[j] == 69)
{
str[j] = 51;
}
else if (str[j] == 111 || str[j] == 79)
{
str[j] = 48;
}
else if (str[j] == 116 || str[j] == 84)
{
str[j] = 55;
}
else if (str[j] == 108 || str[j] == 76)
{
str[j] = 49;
}
}
return (str);
}

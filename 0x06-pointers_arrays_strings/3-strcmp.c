#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1 ptr: string 1
 * @s2 ptr: string 2
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;

while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] < s2[i] || s1[i] > s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}
if (s1[i] == '\0' && s2[i] == '\0')
{
return (0);
}
}

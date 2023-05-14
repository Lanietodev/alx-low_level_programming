#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest ptr: destination string
 * @src ptr: source string
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j, k;
i = 0;

while (dest[i] != '\0')
i++;
j = 0;

while (src[j] != '\0')
j++;
for (k = 0; k < n; k++)
{
dest[i + k] = src[k];
}
dest[i + k] = '\0';
return (dest);
}

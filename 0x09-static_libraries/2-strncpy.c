#include <stdio.h>
#include "main.h"

/**
 * _strncpy - copies a string
 * @n: src array bytes
 * @dest ptr: destination string
 * @src ptr: source string
 * Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';

return (dest);
}

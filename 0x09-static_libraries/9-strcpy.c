#include <stdio.h>
#include "main.h"
/**
 * _strcpy - function that copies the string pointed to by src
 *
 * @dest ptr:  A pointer to an array
 * @src ptr: a pointer to an array
 * Return: dest (success)
*/
char *_strcpy(char *dest, char *src)
{
int l = 0;
int x;

while (*(src + l) != '\0')
{
l++;
}
for (x = 0; x < l; x++)
{
dest[x] = src[x];
}
dest[l] = '\0';
return (dest);
}

#include "main.h"
/**
 * _strlen - returns the length of a string
 *
 * @s ptr:  A pointer to a string
 * Return: 0 (success)
*/
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}

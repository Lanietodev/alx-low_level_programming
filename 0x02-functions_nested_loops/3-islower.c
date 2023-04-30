#include "main.h"
/**
 *_islower - checks lowercase characters
 *
 * @c int c is the character to check
 * Return: 0 (uppercase)
 * Return2: 1 (lowercase)
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}

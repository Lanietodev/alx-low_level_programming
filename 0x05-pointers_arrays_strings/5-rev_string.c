#include "main.h"
/**
 * rev_string - reverses a string.
 *
 * @s ptr:  A pointer to a string
 * Return: 0 (success)
*/
void rev_string(char *s)
{
	int i;
int len = 0;

while (s[len] != '\0')
{
len++;
}
for (i = 0; i < len / 2 ; i++)
{
char temp = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = temp;
}
}

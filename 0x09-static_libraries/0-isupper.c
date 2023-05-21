#include <stdio.h>
/**
* _isupper - checks for uppercase character
* @c: parameter to check
* Return: 1 (uppercase)
* Return2: 0 (lowercase)
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

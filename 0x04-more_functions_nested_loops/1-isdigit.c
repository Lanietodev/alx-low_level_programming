#include <stdio.h>
/**
* _isdigit - checks for a digit (0 through 9)
* @c: parameter to check
* Return: 1 (uppercase)
* Return2: 0 (lowercase)
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

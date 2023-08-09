#include <stdio.h>
#include <stdlib.h>

/**
*_strdup - Entry point
*@str: pointer to string
*Return: pointer to string
*/

char *_strdup(char *str)
{
	unsigned int i, j = 0;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[j] != '\0')
	{
		j++;
	}
	ptr = malloc(sizeof(char) * (j + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		ptr[i] = str[i];
	}
	ptr[j] = '\0';
	return (ptr);
}

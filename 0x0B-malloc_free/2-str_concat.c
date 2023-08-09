#include <stdio.h>
#include <stdlib.h>

/**
*str_concat - Entry point
*@s1: pointer to first string
*@s2: pointer to second string
*Return: pointer to concatenated string
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, m;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}
	ptr = malloc((sizeof(char)) * (i + j + 1));

	if (ptr == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
	{
		ptr[k] = s1[k];
	}
	for (m = 0; m < j; m++)
	{
		ptr[i + m] = s2[m];
	}
	ptr[i + m] = '\0';
	return (ptr);
}

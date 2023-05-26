#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - entry point
 * @str ptr:  string pointer
 * Return: a pointer to string
*/
char *_strdup(char *str)
{
int i = 0;
int j;
char *dup;

if (str == NULL)
{
return (NULL);
}
while (str[i] != '\0')
{
i++;
}
dup = (char *)malloc((i + 1) * sizeof(char));
if (dup == NULL)
{
exit(0);
}
for (j = 0; j < i; j++)
{
dup[j] = str[j];
}
return (dup);
}

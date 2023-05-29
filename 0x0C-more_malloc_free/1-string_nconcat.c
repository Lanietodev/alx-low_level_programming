#include <stdio.h>
#include <stdlib.h>

/**
* string_nconcat - Concatenates two strings using at
*                  most an inputed number of bytes.
* @s1: The first string.
* @s2: The second string.
* @n: The maximum number of bytes of s2 to concatenate to s1.
* Return: If the function fails - NULL.
*         Otherwise - a pointer to the concatenated space in memory.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j;
char *ptr;
i = 0;
j = 0;
while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
{
j++;
}
j = n;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
ptr = malloc(sizeof(char) * (i + n + 1));
if (ptr == NULL)
exit(1);
if (n >= j)
n = j;
for (i = 0; s1[i] != '\0'; i++)
ptr[i] = s1[i];
for (j = 0; j <= n - 1; j++)
{
ptr[i + j] = s2[j];
}
ptr[i + j] = '\0';
return(ptr);
}

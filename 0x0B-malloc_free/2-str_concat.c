#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - entry point
 * @s1 ptr:  string pointer
 * @s2 ptr: string pointer
 * Return: a pointer to string
*/
char *str_concat(char *s1, char *s2)
{
int i, j, k, l;
char *scat;
i = j = l = 0;

if (s1 == NULL && s2 == NULL)
{
s1 = "";
s2 = "";
}
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[i] != '\0')
{
i++;
}
k = i;
while (s2[j] != '\0')
{
j++;
}
l = j;
scat = (char *)malloc((i + j + 1)*sizeof(char));
if (scat == NULL)
{
exit(0);
}
for (i = 0; i < k; i++)
{
scat[i] = s1[i];
}
for (j = 0; j < l; j++)
{
scat[i + j] = s2[j];
}
scat[i + j] = '\0';
return (scat);
}

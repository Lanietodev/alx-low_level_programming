#include <stdio.h>
#include "main.h"

/**
 * rot13 - encodes a string into 1337
 *
 * @s ptr: string pointer
 * Return: Always 0 (Success)
 */
char *rot13(char *s)
{
int i, j;
char subs[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char str[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (s[i] == subs[j])
{
s[i] = str[j];
break;
}
}
}
return (s);
}

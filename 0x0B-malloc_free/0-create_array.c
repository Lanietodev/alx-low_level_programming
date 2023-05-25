#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - entry point
 * @size: size of array
 * @c: character of array
 * Return: a pointer to the array
*/

char *create_array(unsigned int size, char c)
{
unsigned int i;

char *array = (char *) malloc(size * sizeof(char));
if (array == NULL)
{
exit (0);
}
if (size == 0)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}

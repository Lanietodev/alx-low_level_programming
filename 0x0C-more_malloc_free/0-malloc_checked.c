#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
* malloc_checked - allocate memory using malloc.
* @b: unsigned int memory size to allocate
* Return: void pointer to malloc'd memory space
*/

void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}

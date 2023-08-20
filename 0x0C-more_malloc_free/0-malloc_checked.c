#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

/**
* malloc_checked - Entry point
* @b: Size to check
* Return: Pointer to allocated memory
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

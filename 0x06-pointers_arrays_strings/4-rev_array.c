#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @n: array length
 * @a ptr: string 2
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
int i, j;
int temp;

for (i = 0, j = n - 1; i < j; i++, j--)
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}

#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 *
 * @a ptr:  A pointer to an array
 * @n: number of array
 * Return: 0 (success)
*/
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d ", a[i]);
}
printf("\n");
}

#include "main.h"
/**
 * swap_int -updates the value of a pointer to 98
 *
 * @a ptr:  A pointer to an integer that will be swapped
 * @b ptr:  A pointer to an integer that will be swapped
 * Return: 0 (success)
*/

void swap_int(int *a, int *b)
{
int x = *a;
*a = *b;
*b = x;
return (0);
}

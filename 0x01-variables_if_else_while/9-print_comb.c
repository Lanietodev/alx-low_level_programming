#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 (success)
*/
int main(void)
	{
	int i = 0;

	while (i <= 9)
	{
	putchar(i + '0');
	putchar(',');
	putchar(' ');
	i++;
}
	putchar('\n');
	return (0);
}

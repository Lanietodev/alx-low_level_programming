#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 (success)
*/
int main(void)
	{
	int i = 0;

	while (i < 10)
	{
	putchar(i + '0');
	i++;
}
	i = 'a';

	while (i <= 'f')
	{
	putchar(i);
	i++;
}
	putchar('\n');
	return (0);
}

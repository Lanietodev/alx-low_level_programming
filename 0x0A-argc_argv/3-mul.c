#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv ptr: argument vector
 * Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	int i, mul;

	for (i = 1; i < argc; i++)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
	}
	if (i > 1)
	{
		printf("%d\n", mul);
	}
	else
	{
		printf("ERROR\n");
	}
	return (0);
}

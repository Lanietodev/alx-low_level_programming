#include <stdio.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv ptr: argument vector
 * Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	int extraArgc = argc - 1;
	(void)argv;

	printf("%d\n", extraArgc);
	return (0);
}

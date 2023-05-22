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
	int i, sum;
	sum = 0;

	for (i = 0; i < argc; i++)
	{
		if (i == 0)
			{
			printf("0\n");
			}
		if (i > 0)
		{
			if (isalpha(argv[i])
				{
				printf("ERROR\n");
				}
			else
			{
			sum = sum + atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}

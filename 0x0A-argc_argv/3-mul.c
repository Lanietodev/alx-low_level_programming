#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv ptr: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
int i, mul = 1;
if (argc > 2)
{
for (i = 1; i < argc; i++)
{
mul *= atoi(argv[i]);
}
printf("%d\n", mul);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}

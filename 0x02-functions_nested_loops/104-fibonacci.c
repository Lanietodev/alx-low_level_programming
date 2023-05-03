#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 (success)
*/
int main(void)
{
long first = 1, second = 2, next;
int n;

printf("%ld, %ld", first, second);
for (n = 0; n <= 100; n++)
{
next = first + second;
printf(", %ld", next);
first = second;
second = next;
}
printf("\n");
return (0);
}

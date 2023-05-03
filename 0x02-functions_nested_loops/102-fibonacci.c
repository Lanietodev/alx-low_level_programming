#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 (success)
*/
int main(void)
{
long long first = 1, second = 2, next;

int n;

printf("%d, %d", first, second);
for (n = 3; n <= 50; n++)
{
next = first + second;
printf(", %lld", next);
first = second;
second = next;
}
printf("\n");
return (0);
}

#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 (success)
*/
int main(void)
{
unsigned long long first = 1, second = 2, next;
int n;

printf("%llu, %llu", first, second);
for (n = 0; n <= 98; n++)
{
next = first + second;
printf(", %llu", next);
first = second;
second = next;
}
printf("\n");
return (0);
}

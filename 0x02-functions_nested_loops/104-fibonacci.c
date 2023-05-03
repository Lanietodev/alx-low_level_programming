#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 (success)
*/
int main(void)
{
unsigned long first = 1, second = 2, next;
int n;

printf("%lu, %lu", first, second);
for (n = 0; n <= 98; n++)
{
next = first + second;
printf(", %lu", next);
first = second;
second = next;
}
printf("\n");
return (0);
}

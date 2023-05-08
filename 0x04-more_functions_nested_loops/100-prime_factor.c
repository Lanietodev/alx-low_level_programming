#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (success)
*/
int main(void)
{
long long n, i, j, isPrime, lastFactor;
n = 612852475143;

for (i = 2; i <= n; i++)
{
isPrime = 1;
for (j = 2; j <= i / 2; j++)
{
if (i % j == 0)
{
isPrime = 0;
break;
}
}
if (isPrime == 1 && n % i == 0)
{
lastFactor = i;
n /= i;
i = 1;
}
}
printf("%lld", lastFactor);
return (0);
}

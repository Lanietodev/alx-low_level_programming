#include <stdio.h>
/**
* main - entry point
* @n: parameter to check
* Return: 0 (success)
*/
int main(int n)
{
for (n = 1; n <= 100; n++)
{
if (n % 3 == 0 && n % 5 == 0)
{
printf("FizzBuzz");
}
else if (n % 3 == 0)
{
printf("Fizz");
}
else if (n % 5 == 0)
{
printf("Buzz");
}
else
{
if (n > 9)
{
printf("%d", n / 10);
printf("%d", n % 10);
}
else
{
printf("%d", n);
}
}
printf(" ");
}
}

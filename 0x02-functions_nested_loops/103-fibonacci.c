#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 (success)
*/
int main(void)
{
int prev = 1, curr = 2, sum = 0, temp;

while (curr <= 4000000)
{
if (curr % 2 == 0)
{
sum += curr;
}
temp = curr;
curr = prev + curr;
prev = temp;
}
printf("%d\n", sum);
return (0);
}

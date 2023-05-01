#include "main.h"
/**
*_abs - checks for absolute values
*
*@n: character to be checked
*Return: 0(success)
*/
int _abs(int n)
{
if (n < 0)
{
n = n * -1;
_putchar(n + '0');
}
else if (n == 0)
{
n = '0';
_putchar(n + '0');
}
else
{
_putchar(n + '0');
}
return (0);
}

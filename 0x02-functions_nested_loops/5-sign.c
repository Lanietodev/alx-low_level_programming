#include "main"
/**
* print_sign - checks for number signs
*
* @n: character to be checked
* Return: 1(>0)
* Return2: 0(==0)
* Return3: -1(<0)
*/
int print_sign(int n)
{
if (n > 0)
{
putchar(43);
return (1);
}
else if (n == 0)
{
putchar(48);
return (0);
}
else
{
putchar(45);
return (-1);
}
}

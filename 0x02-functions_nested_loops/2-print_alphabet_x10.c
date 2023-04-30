#include "main.h"
/**
 * print_alphabet_x10 - prints a-z 10 times
 *
 * Returen: 0 (success)
*/
void print_alphabet_x10(void)
{
int i, j;

for (j = 0; j < 10; j++)
{
for (i = 98; i <= 122; i++)
{
_putchar (i);
}
_putchar ('\n');
}
}

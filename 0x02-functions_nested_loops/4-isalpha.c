#include "main.h"
/**
* _isalpha - checks for alphabets
*
* @c: character to be checked
* Return: 1(an alphabet)
* Return2: 0(not an alphabet)
*/
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c >= 122))
{
return (1);
}
else
{
return (0);
}
}


#include "main.h"

/**
* _isupper - checks for uppercase characters.
* Return: 1 on success, otherwise 0.
*/

int _isupper(int c)
{
int result;
if (c >= 'A' && c <= 'Z')
{
result = 1;
}
else
{
result = 0;
}
_putchar(c);
_putchar(':');
return (result);
}

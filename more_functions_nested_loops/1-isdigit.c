#include "main.h"

/**
* _isdigit - checks for a digit (0-9)
* @c: is the digit that gets checked
* Return: 1 on success, otherwise 0.
*/

int _isdigit(int c)
{
int result;
if (c >= 48 && c <= 57)
{
result = 1;
}
else
{
result = 0;
}
return (result);
}

#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: parameter to be checked for size.
 * Return: length of a string
 */

int _strlen(char *s)
{
int length = 0;

for (length = 0; *s != '\0'; s++, length++)
{

}
return (length);
}

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: the string
 */

void puts_half(char *str)
{
int i;
int length = _strlen(str);

for (i = (length + 1) / 2; i < length; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}

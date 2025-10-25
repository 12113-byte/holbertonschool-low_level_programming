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
 * rev_string - reverses a string
 *
 */

void rev_string(char *s)
{
int i;
int length = _strlen(s);

for (i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}

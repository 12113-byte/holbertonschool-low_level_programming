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
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: string
 */

void puts2(char *str)
{
int i;
int length = _strlen(str);

for (i = 0; i < length ; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}

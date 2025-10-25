#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: the string that gets printed
 */

void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}

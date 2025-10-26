#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: string
 */

void puts2(char *str)
{
for (; *str != '\0'; str += 2)
{
_putchar(*str);
}
_putchar('\n');
}

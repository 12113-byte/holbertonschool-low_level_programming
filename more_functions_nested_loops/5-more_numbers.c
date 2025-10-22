#include "main.h"

/**
* more_numbers - prints numbers 0-14 ten times, followed by a
* new line after each loop.
*/

void more_numbers(void)
{
int i;
int j;
for (i = 1; i <= 10; i++)
{
for (n = 0; n <= 14; n++)
{
if (n > 9)
{
_putchar('1');
}
_putchar(n % 10 + '0');
}
_putchar('\n');
}
}

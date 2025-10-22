#include "main.h"

/**
* more_numbers - prints numbers 0-14 ten times, followed by a
* new line after each loop.
* @i: prints 10 times
* @n: numbers 0-14
*/

void more_numbers(void)
{
int i;
int n;
for (i = 1; i <= 10; i++)
{
for (n = 0; n <= 14; n++)
{
_putchar(n);
}
_putchar('\n');
}
}

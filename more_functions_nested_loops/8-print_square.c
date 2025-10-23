#include "main.h"

/**
 * print_square - prints a square of #'s
 * @size - the size of the square
 */

void print_square(int size)
{
int i;
int n;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (n = 0; size > n; n++)
{
for (i = 0; size > i; i++)
{
_putchar('#');
}
_putchar('\n');
}
}
}

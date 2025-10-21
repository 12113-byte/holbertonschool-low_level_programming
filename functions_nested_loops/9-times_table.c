#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 */

void times_table(void)
{
int row;
int col;
int number;

for (row = 0; row <= 9; row++)
{
for (col = 0; col <= 9; col++)
{
number = row * col;
if (col == 0)
{
_putchar(number + '0');
}
else
{
_putchar(',');
_putchar(' ');
if (number < 10)
{
_putchar(' ');
_putchar(number + '0');
}
else
{
_putchar((number / 10) + '0');
_putchar((number % 10) + '0');
}
}
}
_putchar('\n');
}
}
#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * Return: void
 */

void print_triangle(int size)
{
int i, j, k;

if (size <= 0)
{
_putchar('\n');
}
else
for (i = 0; i < size; i++)
{
for (k = 0; k < size - i - 1; k++)
{
_putchar(' ');
}
for (j = 0; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}

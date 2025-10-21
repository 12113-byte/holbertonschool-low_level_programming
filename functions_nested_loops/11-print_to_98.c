#include "main.h"
#include <stdio.h>

/**
* print_to_98 - prints all numbers from 0 up to 98,
*  separated by a comma, followed by a space.
* @n: placeholder for another number
*
*/
void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
printf("%d", n);
if (n != 98)
printf(",");
}
else
{
for (; n >= 98; n--)
{
printf("%d", n);
if (n != 98)
printf(",");
}
}
printf("\n");
}

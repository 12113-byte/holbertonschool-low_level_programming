#include "main.h"

/**
 * jack_bauer - prints every minute from 00:00 to 23:59
 *
 * Return: 0 on success
 *
 */

void jack_bauer(void)
{
int hour_tens;
int hour_ones;
int minute_tens;
int minute_ones;

for (hour_tens = 0; hour_tens <= 2; hour_tens++)
{
for (hour_ones = 0; hour_ones <= 9; hour_ones++)
{
if (hour_tens == 2 && hour_ones == 4)
break;
for (minute_tens = 0; minute_tens <= 5; minute_tens++)
{
for (minute_ones = 0; minute_ones <= 9; minute_ones++)
{
_putchar(hour_tens + '0');
_putchar(hour_ones + '0');
_putchar(':');
_putchar(minute_tens + '0');
_putchar(minute_ones + '0');
_putchar('\n');
}
}
}
}
}

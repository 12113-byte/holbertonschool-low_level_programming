#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: number where we take the last digit from
 * Return: last digit of n
 *
 */

int print_last_digit(int n)
{
int last_digit = _abs((n % 10));
_putchar(last_digit + '0');
return last_digit;
}

#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_them_all - sum of all its parameters
 * @n: the counter
 *
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int total = 0;
	unsigned int i;
	va_list args;

	if (n == 0)
	{
	return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	total += va_arg(args, int);
	}

	va_end(args);
	return (total);
}


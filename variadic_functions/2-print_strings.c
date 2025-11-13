#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - prints strungs, followed by a new line
 * @n: number of strings passed to function
 * @separator: string to be printed between strings
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *temp;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		temp = va_arg(args, char *);

		if (temp == NULL)
		{
		printf("(nil)");
		}
		else
		{
		printf("%s", temp);
		}
		if (separator == NULL || i == n - 1)
		{
		}
		else
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}


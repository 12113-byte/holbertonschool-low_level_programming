#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_name - prints a name
 * @name: that gets printed
 * @f: points to a function
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
	return;
	}
	f(name);
}


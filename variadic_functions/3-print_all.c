#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_a_char - prints  only  a char
 *
 */
void print_a_char(va_list args)
{
	char value = va_arg(args, int);
	printf("%c", value);
}
/**
 * print_an_int - prints only  ints
 */
void print_an_int(va_list args)
{
	int value = va_arg(args, int);
	printf("%i", value);
}
/**
 * print_a_float - prints a  float
 */
void print_a_float(va_list args)
{
	double value = va_arg(args, double);
	printf("%f", value);
}
/**
 * print_a_char_ptr - prints a char pointer
 */
void print_a_char_ptr(va_list args)
{
	char *value = va_arg(args, char  *);
	if (value ==  NULL)
	{
		printf("(nil)");
	}
	printf("%s", value);
}
/**
 * print_all - prints everything
 *
 *
 *
 */

void print_all(const char * const format, ...)
{
	char *separator = "";
	const char *p = format;
	int i;

	printer_t form_types[] = {
		{ "c", print_a_char },
		{ "i", print_an_int },
		{ "f", print_a_float },
		{ "s", print_a_char_ptr },
		{NULL, NULL},
	};
	va_list args;
	va_start(args, format);

	while (*p != '\0')
	{
		i =  0;
		while (form_types[i].symbol != NULL)
		{
			if (*(form_types[i].symbol) == *p)
			{
				printf("%s", separator);
				form_types[i].func(args);
				separator = ", ";
			}
			i++;
		}
		p++;
	}
	va_end(args);
	printf("\n");
}


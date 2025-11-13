#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 */

void print_a_char(char c)
{
	printf("%c%c ", c);
}
void print_a_int(int i)
{
	printf("%i%c", i);
}
void print_a_float(double f)
{
	printf("%f%c", f);
}
void print_a_char_ptr(char *s)
{
	printf("%s%c", s);
}
/**
 * print_all - prints everything
 *
 *
 *
 */

void print_all(const char * const format, ...)
{
va_list args;
char c;
int i;
float f;
char *s;
const char *separator = ", ";

va_start(args, format);

while (*format != '\0')
{
const char *next = format + 1;

	if (*format == 'c')
{
	c = va_arg(args, int);
	print_a_char(c);
}
else if (*format == 'i')
{
	i = va_arg(args, int);
	print_a_int(i);
}
else if (*format == 'f')
{
	f = va_arg(args, double);
	print_a_float(f);
}
else if (*format == 's')
{
	s = va_arg(args, char *);

		if (s == NULL)
		{
		printf("(nil)");
		}
		else
		{
		print_a_char_ptr(s);
		}
}
while (*next != '\0')
{
	if (*next == 'c' || *next == 'i' || *next == 'f' || *next == 's')
	{
	printf("%s", separator);
	break;
	}
	next++;
}
format++;
}
va_end(args);
printf("\n");
}


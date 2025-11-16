#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

typedef struct printer
{
	char *symbol;
	void (*func)(va_list);
} printer_t;

void print_a_char(va_list args);
void print_an_int(va_list args);
void print_a_float(va_list args);
void print_a_char_ptr(va_list args);

#endif

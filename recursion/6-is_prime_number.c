#include "main.h"

/**
 * support - finds prime number
 * @i: test number to get prime
 * @n: given number
 * Return: prime number on success
 */

int support(int i, int n)
{
	if (i == n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (support(i + 1, n));
}

/**
 * is_prime_number - prime number
 * @n: given number
 * Return: 1 if prime number, otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (support(2, n));
}


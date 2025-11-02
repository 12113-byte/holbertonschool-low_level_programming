#include "main.h"

/**
 * support - helps to find the natural square root
 * @i: number for square root
 * @n: comparison number, number given
 * Return: natural suqare root on success
 */

int support(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (support(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the given number
 * Return: natural square root on succes, otherwise either 0 or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	return (support(n, 1));
}


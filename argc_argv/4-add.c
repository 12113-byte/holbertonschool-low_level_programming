#include <stdio.h>
#include <stdlib.h>

/**
 * checker_function - checks any single string for digits
 * @str: the string being checked
 * Return: 1 if all characters are digits, otherwise 0
 */

int checker_function(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	if (*str >= '0' && *str <= '9')
	{
	return (checker_function(str + 1));
	}
	return (0);
}

/**
 * sum_recursion - recursively sums the integer arguments
 * @argc: total number of arguments
 * @i: current index we're checking
 * @sum: total of the numbers
 * @argv: array of argument strings
 * Return: 0 when the sum is printed
 */

int sum_recursion(int argc, int i, int sum, char *argv[])
{
if (i == argc)
{
	printf("%d\n", sum);
	return (0);
}
	return (sum_recursion(argc, i + 1, sum + atoi(argv[i]), argv));
}

/**
 * all_digits - checks if all command-line arguments contain only digits
 * @argv: array of argument strings
 * @i: current index being processed
 * @argc: total number of arguments
 * Return: 1 if all arguments are digits, otherwise 0
 */

int all_digits(char *argv[], int i, int argc)
{
	if (i == argc)
	{
	return (1);
	}
	if (checker_function(argv[i]) == 0)
	{
		return (0);
	}
	return (all_digits(argv, i + 1, argc));
}

/**
 * main - adds positive numbers provided from command-line
 * @argc: number of arguments
 * @argv: array of argument strings
 * Return: 0 if sum is printed successfully,
 * 1 if any argument contains non-digit chars
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	if (all_digits(argv, 1, argc) == 0)
	{
		printf("Error\n");
		return (1);
	}
	return (sum_recursion(argc, 1, 0, argv));
}


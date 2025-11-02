#include <stdio.h>

/**
 * function_name - print strings
 * @argv: pointer to current position in the argument array
 */

void function_name(char *argv[])
{
if (*argv)
{
printf("%s\n", *argv);
function_name(argv + 1);
}
}

/**
 * main - calls function_name
 * @argc: voided
 * @argv: full array
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	(void)argc;
	function_name(argv);
	return (0);
}


#include "3-calc.h"
#include <stdio.h>
#include <stlib.h>

/**
 * main - performs simple operations
 * @argc: argument count
 * @argv: array of strings
 * Return: operation on sucess, if unsuccessful
 * 98, 99 or 100, depending on where code fails.
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	int (*op_func)(int, int);

	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && (num2 == 0))
		{
		printf("Error\n");
		exit(100);
		}
	result = op_func(num1, num2);
	printf("%d\n", result);
}


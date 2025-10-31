#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a swaure matrix of integers
 * @a: the poistion of the number in the grid
 * @size: the size of the grid
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum_main = 0;
	int sum_other = 0;

	for (i = 0; i < size; i++)
	{
		sum_main += a[(i * size) + i];
		sum_other += a[(i * size) + (size - 1 - i)];
	}
	printf("%d, %d\n", sum_main, sum_other);
}

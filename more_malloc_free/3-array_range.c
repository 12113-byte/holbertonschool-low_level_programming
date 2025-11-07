#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers
 * @min: smallest integer
 * @max: biggest integer
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int size, *ptr, i;

	if (min > max)
	{
		return (NULL);
	}

	size = (max - min) + 1;

	ptr = malloc(size * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = min + i;
	}

	return (ptr);
}


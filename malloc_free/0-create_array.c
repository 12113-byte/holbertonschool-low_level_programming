#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an arraf of chars, and initializes it with
 * a specific char.
 * @c: chars of the string
 * @size: size of the string
 * Return: NULL, if size or array == 0. Array on success.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}

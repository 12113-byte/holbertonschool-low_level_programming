#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a poiinter to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: the string being copied
 * Return: a pointer to a newly allocated space in memory on sucess,
 * otherwise NULL
 */

char *_strdup(char *str)
{
	char *array;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{

	}

	array = malloc((i + 1) * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		array[i] = str[i];
	}
	array[i] = '\0';
	return (array);
}

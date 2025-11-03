#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first part of the string
 * @s2: second part of the string
 * Return: the new string on success
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, k2;
	char *total_size;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	total_size =  malloc((i + j + 1) * sizeof(char));

	if (total_size == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < i; k++)
	{
		total_size[k] = s1[k];
	}
	for (k2 = 0; k2 < j; k2++)
	{
		total_size[i + k2] = s2[k2];
	}
	total_size[i + j] = '\0';
	return (total_size);
}


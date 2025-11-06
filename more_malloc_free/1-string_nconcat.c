#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first part of string
 * @s2: second part of string
 * @n: number of bytes to copy from s2
 * Return: pointer to newly allocated concatenated string,
 * otherwise NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length_s1 = 0, length_s2 = 0;
	unsigned int copy_len_s2, i, j;
	char *array;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[length_s1] != '\0')
		length_s1++;
	while (s2[length_s2] != '\0')
		length_s2++;
	if (n < length_s2)
		copy_len_s2 = n;
	else
		copy_len_s2 = length_s2;
	array = malloc((length_s1 + copy_len_s2 + 1) * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < length_s1; i++)
	{
		array[i] = s1[i];
	}
	for (j = 0; j < copy_len_s2; j++)
	{
		array[length_s1 + j] = s2[j];
	}
	array[length_s1 + j] = '\0';
	return (array);
}


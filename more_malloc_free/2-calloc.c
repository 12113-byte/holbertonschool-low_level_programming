#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an awway, using malloc
 * @nmemb: amount of elements in the array
 * @size: amount of bytes
 * Return: a pointer to the allocated memory on sucess, otherwise NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	p = ptr;

	for (i = 0; i < nmemb * size; i++)
	{
		p[i] = 0;
	}

	return (ptr);
}


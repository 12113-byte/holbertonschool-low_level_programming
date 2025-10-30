#include "main.h"

/**
 * _memcpy - copies memory area
 * @n: amount of bytes
 * @dest: memory copied to
 * @src: memory copied from
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *original = dest;

	for (i = 0; i < n; i++)
	{
	*dest = *src;
	dest++;
	src++;
	}
	return (original);
}

#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: where to copy string to
 * @src: where to copy string from
 * @n: counter of chars to copy
 * Return: full string in dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *temp = dest;
	int i = 0;

	while (*src != '\0' && n > i)
	{
	*temp = *src;
	temp++;
	src++;
	i++;
	}
	while (n > i)
	{
	*temp = '\0';
	temp++;
	i++;
	}
	return (dest);
}

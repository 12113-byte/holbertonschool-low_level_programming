#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: first part of the string
 * @src: second part of the string
 * @n: counter where to stop copying
 */

char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;
	int i = 0;

	while (*temp != '\0')
	{
	temp++;
	}
	while (*src != '\0' && n > i)
	{
	*temp = *src;
	temp++;
	src++;
	i++;
	}
	*temp = '\0';
	return (dest);
}

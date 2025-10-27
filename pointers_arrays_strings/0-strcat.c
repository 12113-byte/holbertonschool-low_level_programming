#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first part of new string
 * @src: second part of new string
 * Return: the pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*temp != '\0')
	{
		temp++;
	}
	while (*src)
	{
		*temp = *src;
		temp++;
		src++;
	}
	*temp = '\0';
	return (dest);
}

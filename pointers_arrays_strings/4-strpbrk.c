#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string being searched
 * @accept: the string being compared to s
 * Return: on success s, otherwise NULL
 */

char *_strpbrk(char *s, char *accept)
{

	while(*s)
	{
	for (i = 0; accept[i]; i++)
	{
		if (*s == accept[i])
		{
		return (s);
		}
	}
	s++;
	}
return (NULL);
}

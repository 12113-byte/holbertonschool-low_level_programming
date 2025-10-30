#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: a pointer to the first occureence of the character c
 * in the strin s
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
	if (s[i] == c)
	{
	return (&s[i]);
	}
	i++;
	}
	if (c == '\0')
	{
	return (s);
	}
	return (NULL);
}

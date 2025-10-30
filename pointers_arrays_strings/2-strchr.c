#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: a pointer to the first occureence of the character c
 * in the strin s
 */

char *_strchr(char *s, char c)
{
	char *string = s;

	while (*string)
	{
	if (*string == c)
	{
	return (string);
	}
	string++;
	}
	if (c == '\0')
	{
	return (string);
	}
	return (NULL);
}

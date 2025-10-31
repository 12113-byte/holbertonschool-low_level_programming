#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string.
 * @s: parameter to be checked for size.
 * Return: length of a string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}

/**
 * _strncmp - compares n positions of two strings
 * @s1: one string
 * @s2: second string
 * @n: number of positions in string
 * Return: amount of differences
 */

int _strncmp(char *s1, char *s2, int n)
{
	while (*s1 && (*s1 == *s2) && (n > 0))
	{
	s1++;
	s2++;
	n--;
	}
	if (n == 0)
	{
	return (1);
	}
	return (0);
}

/**
 * _strstr - locates a substring
 * @haystack: string that gets checked
 * @needle: string that gets compared with
 * Return: the first occurence of the substring
 */

char *_strstr(char *haystack, char *needle)
{

while (*haystack)
	{
	if (_strncmp(haystack, needle, _strlen(needle)))
	{
	return (haystack);
	}
	haystack++;
	}
return (NULL);
}

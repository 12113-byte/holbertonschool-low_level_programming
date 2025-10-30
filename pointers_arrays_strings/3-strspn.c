#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the number of bytes in the initial segment of s
 * @accept: bytes from accept
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
char *string = s;
int match, i;
unsigned int count = 0;

	while (*string)
	{
	match = 0;
	for (i = 0; accept[i]; i++)
	{
		if (*string == accept[i])
		{
		match = 1;
		break;
		}
	}
	if (!match)
	{
	break;
	}
	count++;
	string++;
	}
return (count);
}

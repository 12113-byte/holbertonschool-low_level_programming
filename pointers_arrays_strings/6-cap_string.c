#include "main.h"
#include <stdio.h>

/**
 * is_special_char - 
 * Return: 1 on success
 *
 */

int is_special_char(char c)
{
if (c == '?' || c == '"' || c == '(' || c == ')' || c == '-' ||
    c == '{' || c == '}' || c == ';' || c == '.' || c == '!' ||
    c  == ',' || c == ' ' || c == '\n' || c == '\t')
  {
    return (1);
  }
 return (0);
}

/**
 * is_lower - checks for lowercase letters
 * Return: 1 on success
 */

int is_lower(char c)
{
if (c >= 'a' && c <= 'z')
  {
    return (1);
  }
 return (0);
}

/**
 * is_upper - checks for uppercase letters
 * Return: 1 on success
 */

int is_upper(char c)
{
if (c >= 'A' && c <= 'Z')
  {
    return (1);
  }
 return (0);
  }

/**
 * cap_string - capitalizes all words of a string
 *
 *
 */

char *cap_string(char *str)
{
	char *p = str;

	if (is_lower(*str) == 1)
	  {
	    *str = *str - ('a' - 'A');
	  }
	while (*p != '\0')
	{
	  if (is_lower(*p) == 1 && is_special_char(*(p - 1)) == 1)
	  {
	    *p = *p - ('a' - 'A');
	  }
	p++;
	}
	return (str);
}

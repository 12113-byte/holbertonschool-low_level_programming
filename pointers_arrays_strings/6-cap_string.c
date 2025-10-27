#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 *
 */

char *cap_string(char *str)
{
	char *p = str;
	int capitalize = 1;

	while (*p != '\0')
	{
		if ( *p == '?' || *p == '"' || *p == '(' || *p == ')' ||
		*p == '{' || *p == '}' || *p == ';' || *p == '.' || *p == '!' ||
		*p == ',' || *p == ' ' || *p == '\n' || *p == '\t')
		{
		capitalize = 1;
		}
		if ((*p >= 'a' && *p <= 'z') && capitalize == 1)
		{
		*p = *p - 32;
		capitalize = 0;
		}
		p++;
	}
	return (str);
}

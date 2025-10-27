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
		if ((*p >= 33 && *p <= 47) || (*p >= 58 && *p <= 64) ||
		(*p >= 91 && *p <= 96) || (*p >= 123 && *p <= 126) ||
		(*p == ' ' || *p == '\n'))
		{
		capitalize = 1;
		}
		if ((*p >= 'a' && *p <= 'z') && capitalize)
		{
		*p = *p - 32;
		capitalize = 0;
		}
		else if (*p >= 'A' && *p <= 'Z' && capitalize == 0)
		{
		*p = *p + 32;
		capitalize = 0;
		}
		p++;
	}
	return (str);
}

#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 *
 */

char *leet(char *s)
{
  int i = 0;
  int j = 0;
  char num [] = {'4','4','3','3','0','0','7','7','1','1'};
  char letters [] = {'a','A','e','E','o','O','t','T','l','L'};

while (s[i] != '\0')
{
for (j = 0; j < 10; j++)
{
	if (s[i] == letters[j])
	{
	s[i] = num[j];
	break;
	}
	}
 i++;
 }
 return s;
}

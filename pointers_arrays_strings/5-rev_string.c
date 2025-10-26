#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: parameter to be checked for size.
 * Return: length of a string
 */

int _strlen(char *s)
{
int length = 0;

for (length = 0; *s != '\0'; s++, length++)
{

}
return (length);
}

/**
 * rev_string - saves the modified string in reverse.
 * @s: the array
 */

void rev_string(char *s)
{
int start = 0;
int end = _strlen(s) - 1;
char temp;

for (start = 0; start < end; start++)
{
temp = s[start];
s[start] = s[end];
s[end] = temp;
end--;
}
}

#include <stdio.h>

/**
* main - prints every letter of the alphabet in lowercases
* and then uppercases, followed by a new line
*Return: 0 on success
*/

int main(void)
{
int i;
int j;
for (i = 97; i <= 122; i++)
{
putchar(i);
}
for (j = 65; j <= 90; j++)
{
putchar(j);
}
putchar('\n');
return (0);
}

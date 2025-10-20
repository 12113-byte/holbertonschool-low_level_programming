#include <stdio.h>

/**
* main - prints the alphabet in lowercases, except for
* q and e, followed by a new line.
*Return: 0 on success
*/

int main(void)
{
int i;
for (i = 97; i <= 122; i++)
if (i != 'e' && i != 'q')
putchar(i);
putchar('\n');

return (0);
}

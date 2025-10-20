#include <stdio.h>

/**
* main - prints every letter of the alphabet in reverse,
* followed by a new line.
*Return: 0 on success
*/

int main(void)
{
int i;
for (i = 122; i >= 97; i--)
putchar(i);
putchar('\n');

return (0);
}

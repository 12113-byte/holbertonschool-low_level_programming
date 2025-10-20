#include <stdio.h>

/**
* main - prints every single digit number of base 10 starting
* with 0, followed by a new line - using putchar.
*Return: 0 on success
*/

int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
putchar('\n');
return (0);
}

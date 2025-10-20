#include <stdio.h>

/**
* main - prints every single digit number of base 16 starting
* with 0, followed by a new line.
*Return: 0 on success
*/

int main(void)
{
int i;
int j;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
for (j = 97 ; j <= 102 ; j++)
{
putchar(j);
}
putchar('\n');
return (0);
}

#include <stdio.h>

/**
* main - prints all possible combinations of
* single-digit numbers, separated by a comma,
* followed by a new line at the end.
*Return: 0 on success
*/

int main(void)
{
int i;
int j;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
if (i != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

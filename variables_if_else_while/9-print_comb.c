#include <stdio.h>

/**
* main - prints all possible combinations of
* single-digit numbers, separated by a comma,
* followed by a new line.
*Return: 0 on success
*/

int main(void)
{
int i;
int j;
for (i = 0; i < 10; i++)
for (j = i + 1; j < 10; j++)
{
putchar(i + '0');
putchar(j + '0');
if (!(i == 8 && j == 9))
{
putchar(',');
putchar(' ');
}
}
return (0);
}

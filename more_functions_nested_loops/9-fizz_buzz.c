#include <stdio.h>

/**
 * main - prints numbers from 1-100, replacing multiples of three with Fizz and
 * multiples of 5 by Buzz. Combined FizzBuzz.
 */

int main(void)
{
int n;

for (n = 1; n <= 100; n++)
{
if (n % 15 == 0)
{
printf("FizzBuzz");
}
else if (n % 5 == 0)
{
printf("Buzz");
}
else if (n % 3 == 0)
{
printf("Fizz");
}
else
{
printf("%d", n);
}
printf(" ");
}
printf('\n');
}

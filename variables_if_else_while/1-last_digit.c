#include <stdlib.h>
#include <time.h>
#include <stdio.h> 

/**
* main -
*
*
* Return: 0 on success
*/

int main(void)
{
int n;

srand(time(0));
 n = rand() - RAND_MAX / 2;

int last_digit;
last_digit = abs(n % 10);

if (last_digit > 5)
 {
printf("Last digit of %d is %d and is greater than 5")
}
else if (last_digit == 0)
{
printf("Last digit of %d is %d and is 0")
}
else
{
}
  
return (0);
}

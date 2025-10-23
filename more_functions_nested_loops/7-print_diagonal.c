#include "main.h"

/**
*print_diagonal - prints a diagonal line after spaces.
*@space: prints the amount of spaces needed
*/

void print_diagonal(int n)
{
  int space;
  
  if (n <= 0)
    {
      _putchar('\n');
    }
  else
    {
    for (n = 0; n < 0; n++)
	{
	  space = n - 1;
	  _putchar(space);
	  _putchar('\\');
	}
    _putchar('\n');
    }
}

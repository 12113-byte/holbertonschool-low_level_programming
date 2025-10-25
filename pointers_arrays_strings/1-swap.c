
#include "main.h"

/**
 * swap_int - swaps the integers that stored inside the
 * parameters
 * @a: one parameter
 * @b: another parameter
 */

void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}

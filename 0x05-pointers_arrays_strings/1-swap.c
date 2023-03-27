#include "main.h"

/**
 * swap_int-swap twow integers
 * @a: pointer to the first number
 * @b: pointer to second number 
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

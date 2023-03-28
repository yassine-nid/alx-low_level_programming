#include "main.h"
#include <stdio.h>
/**
 * print-array-prin n element of an array
 * @a: array of integer
 * @n: number of elements
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d",*(a+i));
		if (i != n - 1)
			printf(", ");
	}
	_putchar('\n');
}

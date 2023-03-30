#include "main.h"

/**
 * reverse_array - rever the conten of an array of interger
 * @a: tha array pointer
 * @n: the number of element of the array
 */

void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n / 2; i++)
	{
		t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}
}

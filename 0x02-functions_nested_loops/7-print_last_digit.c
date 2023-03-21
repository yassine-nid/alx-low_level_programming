#include "main.h"

/**
 * print_last_digit-print last digit
 * @n: number
 *
 * Returne: last digit
 */

int print_last_digit(int n)
{
	int ld;

	if (n < 0)
		n = -n;
	ld = n % 10;
	_putchar(ld + '0');
	return ld;
}

#include "main.h"

/**
 * print_sign-print the sign of a number
 * @n: number
 *
 * Return: 1 if positive 0 if zero -1 if less then zero
 */

int print_sign(int n)
{
	if (n > 0)
		return 1;
	else if (n < 0)
		return -1;
	else
		return 0;
}
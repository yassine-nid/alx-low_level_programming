#include "main.h"
int _sqrt_helper(int n, int i);
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 *
 * @n: The number whose square root is to be calculated.
 *
 * Return: The natural square root of the given number.
 *         If n does not have a natural square root, the function returns -1.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - Helper function to calculate the natural square root of a number.
 *
 * @n: The number whose square root is to be calculated.
 * @i: The current guess for the square root.
 *
 * Return: The natural square root of the given number.
 *         If n does not have a natural square root, the function returns -1.
 */
int _sqrt_helper(int n, int i)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);

	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1);

	return (_sqrt_helper(n, i + 1));
}


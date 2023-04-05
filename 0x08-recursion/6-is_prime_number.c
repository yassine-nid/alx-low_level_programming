#include "main.h"

/**
 * is_prime_number - Checks if a given number is prime.
 *
 * @n: The number to be checked.
 *
 * Return: If the number is prime, returns 1. Otherwise, returns 0.
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - Helper function to check if a number is prime.
 *
 * @n: The number to be checked.
 * @i: The current divisor to check if n is divisible by it.
 *
 * Return: If the number is prime, returns 1. Otherwise, returns 0.
 */
int is_prime_helper(int n, int i)
{
	if (n < 2)
		return (0);

	if (i * i > n)
		return (1);

	if (n % i == 0)
		return (0);

	return (is_prime_helper(n, i + 1));
}


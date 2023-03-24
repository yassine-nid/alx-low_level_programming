#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - finds the largest prime factor of a number
 * @n: the number to factorize
 *
 * Return: the largest prime factor of n
 */
long int largest_prime_factor(long int n)
{
    long int i, max_factor;

    max_factor = -1;

    while (n % 2 == 0)
    {
        max_factor = 2;
        n /= 2;
    }

    for (i = 3; i <= sqrt(n); i += 2)
    {
        while (n % i == 0)
        {
            max_factor = i;
            n /= i;
        }
    }

    if (n > 2)
        max_factor = n;

    return (max_factor);
}

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
    long int n = 612852475143;
    long int max_factor = largest_prime_factor(n);

    printf("%ld\n", max_factor);

    return (0);
}


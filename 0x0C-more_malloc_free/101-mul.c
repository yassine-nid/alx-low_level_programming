#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 * @c: character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * print_error - prints an error message and exits with status 98
 */
void print_error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * mul - multiplies two positive numbers
 * @num1: first number
 * @num2: second number
 *
 * Return: result of multiplication
 */
int mul(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, i, j, res_size;
	int *res;

	while (num1[len1])
	{
		if (!_isdigit(num1[len1]))
			print_error();
		len1++;
	}
	while (num2[len2])
	{
		if (!_isdigit(num2[len2]))
			print_error();
		len2++;
	}

	res_size = len1 + len2;
	res = calloc(res_size, sizeof(int));
	if (res == NULL)
		exit(98);

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			int product = (num1[i] - '0') * (num2[j] - '0');
			int pos1 = i + j, pos2 = i + j + 1;
			int sum = product + res[pos2];

			res[pos1] += sum / 10;
			res[pos2] = sum % 10;
		}
	}

	i = 0;
	while (i < res_size && res[i] == 0)
		i++;

	if (i == res_size)
		printf("0");
	else
	{
		while (i < res_size)
			printf("%d", res[i++]);
	}

	printf("\n");

	free(res);

	return (0);
}

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		print_error();
	}

	return (mul(argv[1], argv[2]));
}


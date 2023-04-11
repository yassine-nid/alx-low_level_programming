#include <stdio.h>

/**
 * main - Entry point. Prints the name of the program.
 * @argc: Number of command line arguments.
 * @argv: Array of command line arguments.
 *
 * Return: Always 0.
 **/

int main(int argc, char *argv[])
{
	int i;

	i = argc;
	i++;
	printf("%s\n", argv[0]);
	return (0);
}


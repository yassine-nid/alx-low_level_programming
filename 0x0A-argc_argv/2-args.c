#include <stdio.h>

/**
 * main - prints all command-line arguments, one per line
 * @argc: the number of command-line arguments passed to the program
 * @argv: an array of strings containing the command-line arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++) 
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}


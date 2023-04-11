#include <stdio.h>

/**
 * main - prints the number of arguments passed to the program
 * @argc: the number of command-line arguments passed to the program
 * @argv: an array of strings containing the command-line arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
    printf("%d\n", argc - 1);
    return (0);
}


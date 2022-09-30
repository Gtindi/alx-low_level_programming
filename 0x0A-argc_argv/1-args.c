#include <stdio.h>

/**
 * main - a program that prints the number of arguments
 * passed into it.
 * @argc: The argument count
 * @argv: The argument vector pointer
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	argv = argv;

	printf("%d\n", argc - 1);
	return (0);
}

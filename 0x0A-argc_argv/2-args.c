#include <stdio.h>

/**
 * main - a program that prints all arguments it
 * receives.
 * @argc: The argument count
 * @argv: The argument vector pointer
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i++]);

	return (0);
}

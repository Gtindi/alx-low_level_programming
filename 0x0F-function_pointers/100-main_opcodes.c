#include "function_pointers.h"

/**
 * print_opcode - Prints the op code
 * @op: pointer to function
 * @n: number of byte to print
 *
 * Return: void
 */
void print_opcode(char *op, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", op[i]);

		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - a program that prints the opcodes of its own
 * main function.
 * @argc: Argument count
 * @argv: Argument list
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	int n_byte, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n_byte = atoi(argv[1]);

	if (n_byte < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcode((char *)&main, n_byte);
	return (0);
}

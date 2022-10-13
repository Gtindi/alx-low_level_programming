#include "3-calc.h"

/**
 * main - This program calculates two numbers based on given
 * operator
 *
 * @argc: Argument count
 * @argv: Argument list
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	int n1, n2, ans;
	char *op;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = argv[2];
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	op_func = get_op_func(op);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((op[0] == '/' || op[0] == '%') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	ans = op_func(n1, n2);
	printf("%d\n", ans);
	return (0);
}

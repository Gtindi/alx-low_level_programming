#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that adds positive numbers.
 * @argc: The argument count
 * @argv: The argument vector pointer
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum, i, j;
	int flag;

	flag = 0;
	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				flag = 1;
				break;
			}
		}

		if (flag == 1)
			break;
		sum += atoi(argv[i]);
	}

	if (flag == 0)
		printf("%d\n", sum);
	else
		printf("Error\n");

	return (flag);
}

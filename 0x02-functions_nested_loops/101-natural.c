#include <stdio.h>

/**
 * main - this program computes and prints the sum of all the multiples of
 * 3 or 5 below 1024 (excluded)
 *
 * Return: Always 0
 */
int main(void)
{
	int sum = 0;
	int i  = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}

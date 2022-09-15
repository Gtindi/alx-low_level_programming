#include <stdio.h>

/**
 * main- prints largest prime factor
 * Return: returns 0
 */

int main(void)
{
	long number = 612852475143;
	int inc;

	while (inc++ < number / 2)
	{
		if (number % inc == 0)
		{
			number /= 2;
			continue;
		}

		for (inc = 3; inc < number / 2; inc += 2)
		{
			if (number % inc == 0)
				number /= inc;
		}
	}
	printf("%d\n", number);
	return (0);
}

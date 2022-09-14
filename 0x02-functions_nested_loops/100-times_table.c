#include "main.h"

/**
 * print_times_table - This function prints n times table, starting with 0.
 * @n: The number of column and row
 */
void print_times_table(int n)
{
	int i = 0;
	int j, product;

	if (n >= 0 && n <= 15)
	{
		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				product = i * j;
				if (product == 0)
				{
					if (j != 0)
						printSpace(3);
					_putchar('0');
				}
				else if (product < 10)
					printInt(product);
				else if (product >= 10 && product < 100)
					printInt(product);
				else
					printInt(product);

				if (j + 1  <= n)
					_putchar(',');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}

/**
 * printSpace - print n number of spaces
 * @n: The number of spaces to be printed
 */
void printSpace(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar(' ');
		i++;
	}
}

/**
 * printInt - print the given int to stdout
 * @n: the integer to be printed
 */
void printInt(int n)
{
	if (n < 10)
	{
		printSpace(3);
		_putchar(n + '0');
	}
	else if (n >= 10 && n < 100)
	{
		printSpace(2);
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	}
	else
	{
		printSpace(1);
		_putchar(((n / 100) % 10) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	}
}

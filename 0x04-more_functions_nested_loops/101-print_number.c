#include <stdio.h>
#include "main.h"

/**
 * print_number- prints a number
 * @n: number to print
 */

void print_number(int n)
{
	int digit, divisor;
	int base = 9;
	int start = 0;
	int isNegative = 0;
	int isMinInt = 0;

	if (n < 0)
	{
		isNegative = 1;
		n = n * -1;
		isMinInt = n < 0 ? 1 : 0;
		n = n < 0 ? (n + 1) * -1 : n;
	}
	while (base >= 0)
	{
		divisor = to_power(10, base);
		digit = ((n / divisor) % 10);
		if (start == 0 && digit == 0)
		{
			base--;
		}
		else if (start == 0 && digit != 0)
		{
			base--;
			start = 1;
			if (isNegative == 1)
				_putchar('-');
			_putchar(digit + '0');
		}
		else
		{
			if (isMinInt && divisor == 1)
				_putchar((digit + 1) + '0');
			else
				_putchar(digit + '0');
			base--;
		}
	}
	if (divisor == 1 && start == 0)
		_putchar(48);
}

/**
 * to_power - Computes the exponential of a number
 * @n: The number
 * @base: The power that n is raised to
 *
 * Return: The computed power
 */

int to_power(int n, int base)
{
	int i = 0;
	int exp = 1;

	while (i < base)
	{
		exp *= n;
		i++;
	}
	return (exp);
}


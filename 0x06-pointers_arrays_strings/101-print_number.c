#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int divisor, digit;
	int base = 10;
	int places = 9;
	int isNegative = 0;
	int isMinInt = 0;
	int begin = 0;

	if (n < 0)
	{
		isNegative = 1;
		n = n * -1;
		isMinInt = n < 0 ? 1 : 0;
		n = n < 0 ? (n + 1) * -1 : n;
	}

	while (places >= 0)
	{
		divisor = to_power(base, places);
		digit = ((n / divisor) % 10);

		if (begin == 0 && digit == 0)
			places--;
		else if (begin == 0 && digit != 0)
		{
			begin = 1;
			if (isNegative == 1)
				_putchar('-');
			_putchar(digit + '0');
			places--;
		}
		else
		{
			if (isMinInt == 1 && divisor == 1)
				++digit;
			_putchar(digit + '0');
			places--;
		}
	}
	if (divisor == 1 && begin == 0)
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

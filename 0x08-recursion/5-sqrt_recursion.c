#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number to be computed
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	int sqrt;

	if (n < 0)
		return (-1);

	sqrt = _isqrt(n, 1);

	if (sqrt * sqrt == n)
		return (sqrt);
	else
		return (-1);
}

/**
 * _isqrt - Computes the square root of a number using repeated
 * subtraction method
 * @n: The square value
 * @i: The number to be subtracted from n
 *
 * Return: int
 */
int _isqrt(int n, int i)
{
	if (n < 0)
		return (-1);

	return (1 + _isqrt(n - i, i + 2));
}

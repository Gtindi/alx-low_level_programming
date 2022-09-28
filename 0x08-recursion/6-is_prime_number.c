#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * @n: The number to be checked
 *
 * Return: int
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (_is_prime(n, 2));
}

/**
 * _is_prime - Checks if a number is prime
 * @n: The number
 * @x: The increment value
 *
 * Return: int
 */
int _is_prime(int n, int x)
{
	if (x > n / 2)
		return (1);

	if (n % x == 0)
		return (0);

	return (_is_prime(n, x + 1));
}

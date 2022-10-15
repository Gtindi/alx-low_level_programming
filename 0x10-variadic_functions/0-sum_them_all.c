#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: argument count
 * @...: Unnamed arguments
 *
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum = 0;
	unsigned int i;

	if (n > 0)
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(ap, int);
		}
		va_end(ap);
	}

	return (sum);
}

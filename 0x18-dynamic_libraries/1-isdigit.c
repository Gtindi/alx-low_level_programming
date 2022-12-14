/**
 * _isdigit - Checks for a digit
 * @c: The character to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	int res, zero, max;

	zero = 48;
	max = zero + 9;

	if (c >= zero && c <= max)
		res = 1;
	else
		res = 0;

	return (res);
}

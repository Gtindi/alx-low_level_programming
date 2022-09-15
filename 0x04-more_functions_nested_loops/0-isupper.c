/**
 * _isupper - Checks for uppercase
 * @c: The character to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	int res, upper, max;

	upper = 65;
	max = upper + 25;

	if (c >= upper && c <= max)
		res = 1;
	else
		res = 0;

	return (res);
}

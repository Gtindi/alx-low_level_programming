/**
 * _abs - This function computes the absolute value of an integer
 * @n: The integer that the absolute value to be computed
 *
 * Return: The absolute value of n
 */
int _abs(int n)
{
	int result = n;

	if (n < 0)
	{
		result = n * -1;
	}

	return (result);
}

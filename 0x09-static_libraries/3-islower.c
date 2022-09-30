/**
 * _islower - Checks if a character is in lowercase
 * @c: The character to check if is lowercase
 *
 * Return: 1 when c is lowercase. 0 when c is not lowercase
 */
int _islower(int c)
{
	int result = 0;
	int alpha = 97;
	int max = alpha + 26;

	if (c >= alpha && c < max)
	{
		result = 1;
	}
	return (result);
}

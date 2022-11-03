#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: String of bits
 *
 * Return: (unsigned int)
 */
unsigned int binary_to_uint(const char *b)
{
	int dec = 0, i, j;
	unsigned int bit;

	if (b != NULL)
	{
		for (i = 0, j = _strlen(b) - 1; b[i] != '\0'; j--, i++)
		{
			bit = ((unsigned int)b[j]) - 48;
			if (bit != 0 && bit != 1)
			{
				dec = 0;
				break;
			}
			dec = dec + (_pow(2, i) * bit);
		}
	}

	return (dec);
}

/**
 * _pow - Computes the exponential of a number
 * @a: the base value
 * @b: the power value
 *
 * Return: (unsigned int)
 */
unsigned int _pow(unsigned int a, unsigned int b)
{
	if (b == 0)
		return (1);
	return (_pow(a, --b) * a);
}

/**
 * _strlen - This function returns the length of a string.
 * @s: The string to return the length
 *
 * Return: Length of s
 */
int _strlen(const char *s)
{
	long int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: the number
 * @m: the second number
 *
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0, flips = 0;
	char *nBin = to_binary(n);
	char *mBin = to_binary(m);

	if (nBin != NULL && mBin != NULL)
	{
		while (nBin[i] != '\0' && mBin[i] != '\0')
		{
			if (nBin[i] != mBin[i])
				flips += 1;
			i++;
		}
	}

	return (flips);
}

/**
 * to_binary - Converts a decimal to binary
 * @n: The number to be converted
 *
 * Return: string
 */
char *to_binary(unsigned long int n)
{
	unsigned int mask = 1073741824, bit, i;
	char *bin = malloc(sizeof(char) * 32);

	if (bin == NULL)
		return (NULL);
	bin[0] = '0';
	bin[1] = '\0';
	for (i = 0; mask > 0;)
	{
		bit = n & mask;

		if (bit == 0)
			bin[i++] = 48;
		else
			bin[i++] = 49;
		mask >>= 1;
	}
	bin[i] = '\0';

	return (bin);
}

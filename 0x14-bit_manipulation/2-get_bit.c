/**
 * get_bit - returns the value of a bit at a given index.
 * @n: The number to search
 * @index: the bit index
 *
 * Return: (int)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit = 0;

	if ((sizeof(unsigned long int) * 8) <= index)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}

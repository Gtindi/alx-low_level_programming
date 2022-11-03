/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: the digit
 * @index: the index
 *
 * Return: (int)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if ((sizeof(unsigned long int) * 8) <= index)
		return (-1);
	*n = *n | 1 << index;
	return (1);
}

#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: (int)
 */
int get_endianness(void)
{
	int flag = 1;
	int x = 1;
	char *y = (char *)&x;

	flag = *y + 48;
	return (flag);
}

#include "main.h"

/**
 * _islower- checks for lowercase character
 *
 *@c: int to be used for argument of the function
 *
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}

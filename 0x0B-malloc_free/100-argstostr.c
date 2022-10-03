#include "main.h"

/**
 * argstostr - a function that concatenates all the arguments
 * of your program.
 * @ac: Argument count
 * @av: The arguments
 *
 * Return: char pointer
 */
char *argstostr(int ac, char **av)
{
	char *str = NULL;
	int i, j, m, size;

	if (ac > 0 && av != NULL)
	{
		size = 0;
		for (i = 0; i < ac; i++)
			size += _strlen(av[i]) + 1;

		str = malloc(size * sizeof(char) + 1);
		if (str != NULL)
		{
			m = 0;
			for (i = 0; i < ac; i++)
			{
				for (j = 0; av[i][j] != '\0'; j++, m++)
					str[m] = av[i][j];
				str[m++] = '\n';
			}
		}
	}

	return (str);
}

/**
 * _strlen - This function returns the length of a string.
 * @s: The string to return the length
 *
 * Return: Length of s
 */
int _strlen(char *s)
{
	long int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

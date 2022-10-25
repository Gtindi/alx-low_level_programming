#include "lists.h"

/**
 * print_list - a function that prints all the elements of a
 * list_t list.
 * @h: the list
 *
 * Return: (int) The size of the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	char *str;

	while (h != NULL)
	{
		printf("[%d] ", h->len);
		str = h->str;
		if (str == NULL)
			str = "(nil)";
		printf("%s\n", str);
		h = h->next;
		++count;
	}
	return (count);
}

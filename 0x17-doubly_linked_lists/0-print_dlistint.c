#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: The head of the list
 *
 * Return: The number od nodes in the list
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *node;
	size_t count = 1;

	if (h == NULL)
		return (0);
	printf("%d\n", h->n);
	node = h->next;
	while (node != NULL)
	{
		printf("%d\n", node->n);
		node = node->next;
		++count;
	}
	return (count);
}

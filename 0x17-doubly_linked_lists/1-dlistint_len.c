#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: The head of the list
 *
 * Return: length of the list, 0 otherwise
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	dlistint_t *node;

	if (h == NULL)
		return (0);

	len = 1;
	node = h->next;
	while (node != NULL)
	{
		++len;
		node = node->next;
	}
	return (len);
}

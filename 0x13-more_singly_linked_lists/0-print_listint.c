#include "lists.h"

/**
 * print_listint - a function that prints all the elements
 * of a listint_t list.
 * @h: The list head
 *
 * Return: (int) size of the list
 */
size_t print_listint(const listint_t *h)
{
	listint_t *node;
	size_t size = 0;

	if (h != NULL)
	{
		printf("%d\n", h->n);
		node = h->next;
		size++;
		while (node != NULL)
		{
			printf("%d\n", node->n);
			node = node->next;
			size++;
		}
	}

	return (size);
}

#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: The head of the list
 * @index: The node index
 *
 * Return: node at the index, NULL if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = NULL;
	unsigned int idx = 0;

	if (head == NULL)
		return (NULL);

	node = head;
	while (node != NULL && idx != index)
	{
		idx++;
		node = node->next;
	}
	return (node);
}

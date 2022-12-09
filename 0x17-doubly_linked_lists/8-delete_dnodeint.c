#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index
 * of a dlistint_t linked list.
 * @head: The head of the list
 * @index: The index of the node to be deleted
 *
 * Return: 1 if succeded, otherwise -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int idx = 0;
	dlistint_t *node = NULL;

	if (head == NULL)
		return (-1);

	node = *head;
	while (node != NULL)
	{
		if (idx == index)
		{
			if (*head == node)
				*head = node->next;

			if (node->next != NULL)
				node->next->prev = node->prev;

			if (node->prev != NULL)
				node->prev->next = node->next;

			free(node);
			return (1);
		}
		idx++;
		node = node->next;
	}
	return (-1);
}

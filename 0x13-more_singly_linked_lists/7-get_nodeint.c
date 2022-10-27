#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * linked list.
 * @head: The head of the list
 * @index: The index of the node
 *
 * Return: (pointer)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = NULL;
	unsigned int i;

	if (head != NULL)
	{
		node = head;
		for (i = 0; node != NULL; i++)
		{
			if (i == index)
				break;
			node = node->next;
		}
	}

	return (node);
}

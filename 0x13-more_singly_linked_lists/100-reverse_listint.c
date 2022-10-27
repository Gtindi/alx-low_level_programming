#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of
 * a listint_t linked list.
 * @head: The head of the list
 * @index: The index of the node to be deleted
 *
 * Return: (int) 1 on success, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node;
	listint_t *prev = NULL;
	int deleted = -1;
	unsigned int i;

	node = *head;
	for (i = 0; node != NULL; i++)
	{
		if (i == index)
		{
			if (prev != NULL)
				prev->next = node->next;
			else
				*head = node->next;
			free(node);
			deleted = 1;
			break;
		}

		prev = node;
		node = node->next;
	}
	return (deleted);
}

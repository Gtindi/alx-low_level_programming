#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: The head of the list
 *
 * Return: (void)
 */
void free_listint(listint_t *head)
{
	listint_t *node;
	listint_t *next;

	if (head != NULL)
	{
		node = head->next;
		while (1)
		{
			if (node == NULL)
				break;
			next = node->next;
			free(node);
			node = next;
		}
		free(head);
	}
}

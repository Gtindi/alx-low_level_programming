#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: The head of the list
 *
 * Return: (pointer) The reversed head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL;
	listint_t *prev = NULL;

	if (*head != NULL)
	{
		node = *head;
		while (node != NULL)
		{
			*head = node->next;
			node->next = prev;
			prev = node;
			node = *head;
		}
		node = prev;
		*head = node;
	}

	return (node);
}

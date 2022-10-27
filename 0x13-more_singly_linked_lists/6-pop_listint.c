#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node’s data (n).
 * @head: the head of the list
 *
 * Return: (int)
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n = 0;

	if (*head != NULL)
	{
		node = *head;
		n = node->n;
		*head = node->next;
		free(node);
	}

	return (n);
}

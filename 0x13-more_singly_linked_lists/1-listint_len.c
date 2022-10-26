#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a
 * listint_t list.
 * @head: The head of the list
 * @n: the number to be added to list
 *
 * Return: (pointer) to the node that was added
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	const int *ptr = &n;

	if (node == NULL)
		return (NULL);

	node->n = *ptr;
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		node->next = *head;
		*head = node;
	}

	return (node);
}

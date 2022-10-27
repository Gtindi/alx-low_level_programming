#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: The head of the list
 * @n: The number to be added
 *
 * Return: (pointer) to the new node added
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *node;
	const int *ptr = &n;

	if (new_node == NULL)
		return (NULL);

	new_node->n = *ptr;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		node = *head;
		while (node->next != NULL)
			node = node->next;
		node->next = new_node;
	}

	return (new_node);
}

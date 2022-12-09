#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: The head of the list
 * @n: The new node data
 *
 * Return: The new node, NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *tail;
	const int *np = &n;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = *np;
	new_node->prev = NULL;
	new_node->next = NULL;
	tail = *head;
	while ((tail != NULL) && (tail->next != NULL))
		tail = tail->next;

	if (tail != NULL)
	{
		new_node->prev = tail;
		tail->next = new_node;
	}
	else
		*head = new_node;
	tail = new_node;
	return (new_node);
}

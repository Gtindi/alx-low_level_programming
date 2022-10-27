#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: the head of the list
 *
 * Return: (void)
 */
void free_listint2(listint_t **head)
{
	listint_t *node;
	listint_t *next;

	if (head != NULL)
	{
		node = *head;
		while (node != NULL)
		{
			next = node->next;
			free(node);
			node = next;
		}
		*head = NULL;
	}
}

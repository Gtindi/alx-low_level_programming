#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 * @head: The head of the Linked list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}

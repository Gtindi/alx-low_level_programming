#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: The head of the list
 *
 * Return: the size of the list
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *node = NULL;
	size_t len = 0;

	if (head == NULL)
		exit(98);

	printf("[%p] %d\n", (void *)head, head->n);
	len++;
	node = head->next;

	while (node != NULL)
	{
		if (node->flag == 1)
			break;
		printf("[%p] %d\n", (void *)node, node->n);
		node->flag = 1;
		node = node->next;
		len++;
	}

	return (len);
}

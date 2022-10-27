#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a
 * listint_t linked list.
 * @head: the head of the list
 *
 * Return: (int)
 */
int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum = 0;

	if (head != NULL)
	{
		node = head;

		while (1)
		{
			if (node->next == NULL)
			{
				sum += node->n;
				break;
			}
			sum += node->n;
			node = node->next;
		}
	}

	return (sum);
}

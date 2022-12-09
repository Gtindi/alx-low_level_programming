#include "lists.h"

/**
 * set_node - sets the next & prev values of two nodes
 * @source: Sets the next to dest
 * @dest: Sets the prev to source
 *
 * Return: void
 */
void set_node(dlistint_t *source, dlistint_t *dest)
{
	source->next = dest;
	dest->prev = source;
}

/**
 * create_node - create a new node
 * @n: the node data
 *
 * Return: address of the new node
 */
dlistint_t *create_node(int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	return (new_node);
}

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: The head of the list
 * @idx: The idx to insert the new node
 * @n: The node data
 *
 * Return: The address of the new node, NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node = NULL, *node;

	new_node = create_node(n);
	if (new_node == NULL)
		return (NULL);
	if (*h == NULL)
	{
		*h = new_node;
		return (new_node);
	}
	node = *h;
	while (node != NULL)
	{
		if (i == idx)
		{
			if (node->prev == NULL)
			{
				set_node(new_node, node);
				(*h) = new_node;
			}
			else
			{
				new_node->next = node;
				new_node->prev = node->prev;
				node->prev->next = new_node;
				node->prev = new_node;
			}
			return (new_node);
		}
		i++;
		if (idx == i && node->next == NULL)
		{
			set_node(node, new_node);
			return (new_node);
		}
		node = node->next;
	}
	return (NULL);
}

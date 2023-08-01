#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - a function tha inserts new nodes
 * at a given position
 * @head: the pointer to the head of the node
 * @idx: the index where a new node should be added
 * @n: integer for new node.
 * Return: if the function fails then NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *copy = *head;
	unsigned int node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = copy;
		*head = new_node;
		return (new_node);


	}
	for (node = 0; node < (idx - 1); node++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);

		copy = copy->next;

	}
	new_node->next = copy->next;
	copy->next = new_node;

	return (new_node);

}

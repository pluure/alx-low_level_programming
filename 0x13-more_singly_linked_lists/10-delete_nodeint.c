#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index - a function that deletes the node at index
 * of a linked list
 * @head: a pointer to the address of the head
 * @index: the index at which needs to be deleted
 * Return: if succeeded, 1 else -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *copy = *head;
	unsigned int nodes;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);


	}
	for (nodes = 0; nodes < (index - 1); nodes++)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;


	}
	tmp = copy->next;
	copy->next = tmp->next;
	free(tmp);
	return (1);


}

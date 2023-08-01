#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_nodeint_at_index - returns the nth node of a linked list.
 * @head: pointer to the head of the linked list
 * @index: the index of the nth node to be located.
 * Return: if node does not exist return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{

		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);

}
